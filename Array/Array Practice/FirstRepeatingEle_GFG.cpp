#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstRepIndx(int arr[] , int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return i+1;
            }
        }
    }
return -1;
}

int hash_sol(int arr[] , int n){

    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int hash_array(int arr[] , int n ){

    int hash[n+1] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            return i+1 ;
        }
    }

    return -1;
}

int main(){

    int arr[] = {1, 5, 3, 4, 3, 7, 6};
    int n = sizeof(arr)/sizeof(int);

    // Method 1 (brute force)
    // Time Complexity => O(n^2);
    // Space Complexity => O(1);
    // cout<<firstRepIndx(arr,n);

    // Method 2 ( Hashing )
    // Time Complexity => O(n);
    // Space Complexity => O(n) because of hash map; 
    // cout<<hash_sol(arr,n);

    // Method 3 ( creating our own hash_map using array ) 
    cout<<hash_array(arr,n);

    return 0;

}