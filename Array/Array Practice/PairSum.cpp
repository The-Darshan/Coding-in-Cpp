#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void pairSum( int arr[] , int n , int key){

    vector<int> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == key){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}


int main(){

    int arr[] = {1 ,2 ,3 , 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int key = 5;

    pairSum(arr,n,key);

    return 0;

}