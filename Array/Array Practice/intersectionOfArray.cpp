#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Method 1 with zadda time and space complexity
// void intersectionOfArray(int arr1[] , int arr2[] , int n1 , int n2){

//     int ans[n2];
//     // ans ka vector banana h baki sab theek h.
//     int k =0;

//    for(int i=0;i<n1;i++){
//     for(int j =0;j<n2;j++){
        
//         // Optimisation 1 . Since both the arrays are sorted so when we get smaller number in 2nd array we can break the loop . for eg => if we are finding pair for 1 and in 2nd array the first element is 3 so no need of checking further because other elements will be greater than 3 .

//         if(arr1[i]<arr2[j]){
//             break;
//         }

//         if(arr1[i] == arr2[j]){
//             ans[k] = arr1[i];
//             arr2[j] = INT16_MIN;
//             k++;
//             break;
//         }
//     }
//    }

//    for(int i=0;i<n2;i++){
//     cout<<ans[i]<<" ";
//    }

// }

// Method 2 better approach
void intersectionOfArray(int arr1[] , int arr2[] , int n1 , int n2){

    int ans[n2];
    int k=0;
    int j=0;
    int i=0;

    while (i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            ans[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else{
            i++;
        }
    }

    for(int i=0;i<n2;i++){
        cout<<ans[i]<<" ";
    }

}


int main(){

    int arr1[] = {1,2,2,2,3,4};
    int arr2[] = {2,2,3,3};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);

    intersectionOfArray(arr1,arr2,n1,n2);    

    return 0;

}