#include<iostream>
using namespace std;

int missing_ele(int arr[] , int n){

    int low = 0;
    int high = n-1;
    int mid = low + (high-low)/2;
    int ans = -1;

    while(low<=high){

        if(arr[mid] == mid+1 ){
            low = mid+1;
        } 
        else{
            ans = arr[mid];
            high= mid-1;
        }
        mid=low + (high-low)/2;
    }

    if(ans + 1 == 0 ){
        return n+1;
    }

    return ans-1;
}

int main(){

    int arr[] = { 2, 3, 4, 5, 6, 7 , 8, 9};
    int n = sizeof(arr)/sizeof(int);

    cout<<missing_ele(arr,n);

    return 0;
}