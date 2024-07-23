#include<iostream>
using namespace std;

// My Method
int duplicate_from_sorted(int arr[] , int n){

   int ansIndx = 1;
    for(int i=1;i<n;i++){
      if(arr[i] != arr[i-1]){
            arr[ansIndx]=arr[i];
            ansIndx++;
    }}
    return ansIndx;
}

// Sir's Method Fast
int duplicate_from_sorted(int arr[] , int n){

   int j=0,i=1;

    while(i<n){
            if(arr[i] == arr[j]) i++;
            else arr[++j] = arr[i++];
        }
     return j+1;
}


int main(){

    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums)/sizeof(int);

    cout<<duplicate_from_sorted(nums,n);

    return 0;
}