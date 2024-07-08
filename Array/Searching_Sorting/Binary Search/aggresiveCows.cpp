#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPoosible (int arr[] , int n , int m , int mid){

    int cowCount = 1;
    int lastPos = arr[0];

    for(int i=0;i<n ;i++){
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount == m ) return true;
            lastPos = arr[i];
        }
    }
    return false;
}


int aggresiveCows(int arr[] , int n , int m){
    sort(arr,arr+n);
    int s = 0;
    int max_ele = -1;

    for(int i=0;i<n;i++){
        max_ele = max(max_ele , arr[i]);
    }

    int e = max_ele;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPoosible(arr , n , m , mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
return ans;
}

int main(){

    int arr[] = {4 , 2 , 1 ,  3 , 6};
    int n = sizeof(arr)/sizeof(int);

    int m = 2;

    cout<<aggresiveCows(arr,n,m);

    return 0;
}