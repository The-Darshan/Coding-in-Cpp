#include<iostream>
using namespace std;

int main(){

        int n;
        cout<<"Enter the number : ";
        cin>>n;
        int remainder;
        int binaryNumber=0;
        int j=1;

        while(n>0){
           remainder=n%2;
           binaryNumber = binaryNumber + remainder*j;
           n=n/2;
           j*=10;
        }            

    cout<<binaryNumber;

    return 0;
}