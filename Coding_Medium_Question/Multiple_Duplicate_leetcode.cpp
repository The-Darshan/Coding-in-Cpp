#include<iostream>
using namespace std;

int Duplicate_No2(int arr[] , int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    };

    for(int i=0;i<=n;i++){
        int key =0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                key=i;
            }
        }
            ans = ans^key;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<Duplicate_No2(arr,n)<<" ";

    return 0;
}