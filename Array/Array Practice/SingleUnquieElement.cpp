#include<iostream>
#include"assert.h"
using namespace std;

int FindSingleUnquieInput(int arr[] , int n){

   int ans =0;

   for(int i=0;i<n;i++){
    ans=ans^arr[i];
   }    
   return ans;
}

int main(){

    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;

    assert(n>0);

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int unqEle = FindSingleUnquieInput(arr,n);

    cout<<"Unique Element is : "<<unqEle;

    return 0;
}
// IP = [2,1,3,2,1]
// OP = 3