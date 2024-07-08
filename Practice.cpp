#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int duplicate_number(int arr[] , int n) {

    int ans = 0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }

    for(int i=0;i<n;i++){
        ans = ans^i;
    }

    return ans;

}

int sort_swap(int arr[] , int n){

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }

    return arr[0];

}

int negative_indx(int arr[] , int n){

    

}

int main() {
    int arr[] = {1,2,3,2};
    int n = sizeof(arr) / sizeof(int);

    // cout<<sort_swap(arr , n);

    

    return 0;
}
