#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;

    for(int i = 0 ; i<2*n;i++){
        int cond = i<n ? i : n-(i%n)-1 ;
        int space_count = i<n ?  :  ;
        for(int j=0 ; j<=cond;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}