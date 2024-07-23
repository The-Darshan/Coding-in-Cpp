#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int bs(vector<int>&v , int start , int k){
    
    int end = v.size()-1;
    while(start<=end){

        int mid = start+(end-start)/2;

        if(v[mid] == k){
            return mid;
        }
        else if(k>v[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

// M1 => Two Pointer Approach .
// Set and pair ka use kara h .
int findPairs(vector<int>& nums, int k) {

    int pairs = 0;
    set<pair<int,int>>ans;
    int i=0;
    int j = i+1;
    while(j<nums.size()){

        int diff = nums[j]-nums[i]; // No need of absolute beacuse array is already sorted . 
        if(i == j){
            j++;
        }

        else if( diff == k){
            ans.insert({nums[i],nums[j]});
            j++;
            i++;
        }
        else if(diff<k){
            j++;
        }
        else{
            i++;
        }

    }

    return ans.size();
}

// M2 => Using Binary Search
int findPairsWithBinarySearch(vector<int> &nums , int k){

    sort(nums.begin(),nums.end());
    set<pair<int,int>> ans;

    for(int i=0;i<nums.size();i++){
        if(bs(nums,i+1,nums[i]+k) != -1){
            ans.insert({nums[i],nums[i]+k});
        }
    }
    return ans.size();
    // TC => O(nlogn);
}

int main(){

    vector<int> v = {3,1,4,1,5};
    sort(v.begin(),v.end());
    int k = 2;

    cout<<findPairsWithBinarySearch(v,k);

    return 0;
}