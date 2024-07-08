#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool UnquieNoOfOccurance(int arr[] , int n){

   int ans[n];
    int value = arr[0];
    int count = 0;
    int j=0;
    
    for(int i=0;i<n;i++){
        if(arr[i] == value ){
            count++;
            if(arr[i+1] != value){
                ans[j] = count;
                j++;
                value = arr[i+1];
                count = 0;
            }
        }
    }

    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
        if(ans[j]==ans[i]){
            return false;
            }
        }
    }
    return true;
}


int main(){

    int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    int flag = UnquieNoOfOccurance(arr , n);

    if(flag == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;

}