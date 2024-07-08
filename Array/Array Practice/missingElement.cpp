#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// My Method
int missingElement( int arr[] , int n ){

    int ans = 0;

    for(int i=0;i<n;i++){
        ans ^= i^arr[i];
    }

    return (ans^n);

}

// Best Method =>
int missingBySum(int arr[] , int n){

    int sum = (n*(n+1))/2;

    for(int i=0;i<n;i++){
        sum -= arr[i];
    }
    
    return sum;

}

// int sortingMethod(int arr[] , int n ){
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i){
//             return i;
//         }
//         else{
//             continue;
//         }
//     }
//     return n;
// }

int main(){

    int arr[] = {2,1,0};
    int n = sizeof(arr)/sizeof(int);

    // My Method => (using XOR operator)
    // Time Complexity => O(n)
    // cout<<missingElement(arr,n);

    // Method 2 => (using sorting method)
    // sort(arr,arr+n);
    // cout<<sortingMethod(arr,n);
    // Time Complexity => O(nlogn) + O(n) => O(nlogn)

    // Method 3 => (using basics Maths)
    // Better Approach
    cout<<missingBySum(arr,n);

    return 0;

}