#include<iostream>
using namespace std;

int main(){

        int n;
        cout<<"Enter the number : ";
        cin>>n;
        int remainder;
        int decimalNumber=0;
        int j=1;

     while(n>0){
            remainder=n%10;
            decimalNumber = decimalNumber + remainder*j;
            n=n/10;
            j*=2;
        }
    cout<<decimalNumber;

    return 0;
}