#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Method 1
int MissingElement(int arr[] , int n){

    for(int i=0;i<n;i++){
        if(arr[i] != i+1){
            return i+1;
        }
    }
return -1;
}

// Method 2
int negativeIndexing(int arr[] , int n){

    for(int i=0;i<n;i++){
        int indx = abs(arr[i]);
        if(arr[indx-1] >0){
            arr[indx-1] *= -1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
        cout<<i+1<<" ";
        }
    }
}

// Method 3
int swappingAndSorting(int arr[] , int n){

    int i=0;
    while (i<n){
        int indx = arr[i] - 1;
        if(arr[i] != arr[indx]){
            swap(arr[i],arr[indx]);
        }else{
            ++i;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
}

int main(){

    int arr[] = { 3,  3 , 3 , 3 };
    int n = sizeof(arr)/sizeof(n);

    // Method 1 (sorting)
    // Time Complexity => O(n);
    // sort(arr,arr+n);
    // cout<<MissingElement(arr,n);

    // Method 2 (negative Indexing)
    // Time Complexity => O(n)
    // cout<<negativeIndexing(arr,n);

    // Method 3 
    swappingAndSorting(arr,n);

    return 0;

}