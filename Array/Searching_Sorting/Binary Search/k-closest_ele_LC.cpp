#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> findClosestElements(vector<int> &v , int k ,int x){

    int low =0 , high = v.size()-1;
    while (high-low>=k)
    {

        if(x-v[low] > v[high]-x){
            low++;
        }
        else{
            high--;
        }

    }

    vector<int>ans;

    for(int i=low;i<=high;i++){
        ans.push_back(v[i]);
    }
    return ans;

    // for(int i:v){
        // cout<<i<<" ";
    // }
    // return vector<int>(v.begin()+low,v.begin()+high+1);

    // TC => O(n);
    // SC => O(k);
}



int main(){

    vector<int> nums = {1,2,3,4,5};
    int k = 4;
    int x = 3;

    findClosestElements(nums,k,x);

    return 0;
}