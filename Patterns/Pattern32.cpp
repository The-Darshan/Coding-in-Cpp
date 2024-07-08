// Palindrome Triangle with 2 for loop
#include<iostream>
using namespace std;

int main(){

    int n; 
    cin>>n;

    for(int i=0;i<n;i++){
        int c=1;
        int k=i;
        for(int j=0;j<2*n-1;j++){
            if(j<n-i-1){
                cout<<"  ";
            }
            else if(j<n){
                cout<<c<<" ";
                c++;
            }
            else if(j<n+i){
                cout<<k<<" ";
                k--;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}