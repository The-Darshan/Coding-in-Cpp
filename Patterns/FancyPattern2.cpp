#include<iostream>
#include"assert.h"
using namespace std;

int main(){
    int n ; 
    cin>>n;
    int count= 1;
    // assert(n<=4);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<count<<" ";
           count++;
           if(j<i){
            cout<<"*"<<" ";
           }
        }
        cout<<endl;
    }
    int start = count-n;//count=11
    for(int i=0;i<n;i++){
        int k= start;
        for(int j=0;j<=n-i-1;j++){
            cout<<k<<' ';
            k++;
            if(j<n-i-1){
                cout<<"*"<<" ";
            }
        }
        start= start-(n-i-1);
        cout<<endl;
    }

    return 0;
}