#include<iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;

//  Method 1 (best)
int Duplicate_NO2(int arr[] , int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    };

    for(int i=0;i<n;i++){
        ans = ans^i;
    }
    return ans;
}

// Method 2
// int duplicate(int arr[] , int n){
//     for(int i=0;i<n-1;i++){
//         if(arr[i] == arr[i+1]){
//             return arr[i];
//         }
//     }
// }

// Method 3
int negativeIndexing ( int arr[] , int n ){

    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])] >0 ){
            arr[abs(arr[i])] *= -1;
        }
        else{
            return abs(arr[i]);
        }
    }
    return -1;
}

// Method 4
int sortingMethod(int arr[] , int n){

    while(arr[0] != arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }

    return arr[0];

}

int main(){

    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Method 1 
    // Time Complexity -> O(n);
    // cout<<Duplicate_NO2(arr,n);

    // Method 2
    // Time Complexity => O(nlogn)
    // sort(arr,arr+n);
    // cout<<duplicate(arr,n);

    // Method 3 
    // Time Complexity => O(n);
    // cout<<negativeIndexing(arr,n);

    // Method 4
    // Time Complexity => O(n);
    // We get the extra element at 0 index and rest of the array is sorted .
    // cout<<sortingMethod(arr,n);

    return 0;
}