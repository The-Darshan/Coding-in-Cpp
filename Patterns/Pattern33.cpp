// Palindrome Triangle with 2 for loop
#include<iostream>
using namespace std;

int main(){

    int n; 
    cin>>n;
    int k=1;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<n;j++){
          if(j>i){
            cout<<" ";
          }
          else if(i>=n && j<n-k){
          cout<<" ";
          }
          else{
            cout<<"*";
          }
          k++;  
        }
        cout<<endl;
    }

    return 0;
}