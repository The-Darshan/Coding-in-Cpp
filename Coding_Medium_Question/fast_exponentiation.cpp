#include<iostream>
using namespace std;

int main(){

    int a ; cin>>a;
    int b ; cin>>b;
    int m ; cin>>m;

    int res = 1;

    while(b>0){
        if(b&1){
            res = ( 1LL * (res) * (a)%m)%m ;
        }
        a=( 1LL * (a)%m*(a)%m)%m;
        b=b>>1; // Equivalent to b/2 .
    }
    cout<<res;
    // Time Complexity => O (logb) ;

    return 0;
}