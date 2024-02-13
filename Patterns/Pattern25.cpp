#include<iostream>
using namespace std;

int main(){ 
    int n=6;
    for(int i=6;i>1;i--){
        for(int j=1;j<i;j++){
            cout<<j<<" ";
        };
        for(int k =1;k<=((n-i)*2);k++){
            cout<<"*"<<" ";
        };
        for(int l=1;l<i;l++){
            cout<<i-l<<" ";
        }
        cout<<endl;
}
    return 0;
}