#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Addition_Of_2_array(int arr1[] , int arr2[] , int n1 , int n2){

    int i=n1-1 , j=n2-1;
    vector<int> ans;
    int carry = 0;

    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j]+carry;
        int digit = sum % 10;
            ans.push_back(digit);
            carry = sum/10;
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i] + carry;
        int digit = sum % 10;
            ans.push_back(digit);
            carry = sum/10;
        i--;
    }

    while(j>=0){
        int sum = arr2[j] + carry;
        int digit = sum % 10;
            ans.push_back(digit);
            carry = sum/10;
        j--;
    }

    if(carry){
        ans.push_back(carry);
    }

    while (ans[ans.size()-1] == 0)
    {
        ans.pop_back();
    }

    reverse(ans.begin(),ans.end());

    for(auto it:ans){
        cout<<it<<" ";
    }

}

int main(){

    int arr1[] = {0,9,0,0,3,5} ;
    int arr2[] = {2,2,7} ;

    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int); 

    Addition_Of_2_array(arr1, arr2, n1, n2);

    return 0;

}