#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void countAndSort(int arr[] , int n ){

    // int zeroes=0 , one =0 , two =0 ;
    // Counting number of 0 , 1 and 2
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         zeroes++;
    //     }
    //     else if(arr[i] == 1){
    //          one ++;
    //     }
    //     else{
    //         two ++;
    //     }
    // }

    //  Inserting 0 , 1 and 2 in the array
//     int i=0;
//     while(zeroes>0){
//         arr[i]=0;
//         i++;
//         zeroes--;
//     }
//     while(one>0){
//         arr[i]=1;
//         i++;
//         one--;
//     }
//     while(two>0){
//         arr[i]=2;
//         i++;
//         two--;
//     }

//     Printing the sorted array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

void sort_0_1_2(int arr[] , int n){

    int low = 0 , mid = 0 , high = n-1;

    while(high>=mid){
        if( arr[mid] == 0 ){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if( arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    

}

int main(){

    int arr[] = {2 ,0 , 1};
    int n = sizeof(arr)/sizeof(int);

    // Method 1 =>
    // Not allowed because of sort function is not allowed .
    // Time Complexity -> O(nlogn); 
    // sort(arr , arr+n);

    // Method 2 (counting) =>
    // Not allowed because it violetes the rule of in-place sorting ;
    // Time complexity -> O(2n) = O(n)
    // Space Complexity -> O(1)
    // countAndSort(arr ,n );

    // Method 3 ( 3 Pointer Approach ) =>
    sort_0_1_2(arr , n);

    return 0;
}