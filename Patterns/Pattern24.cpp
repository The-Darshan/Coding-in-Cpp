#include<iostream>
using namespace std;

int main(){ 
    for(int i=1;i<5;i++){
        for(int j=0;j<4-i;j++){
            cout<<" "<<" ";
        };
    
        for(int j=0;j<i;j++){
           cout<<j+1<<" ";
        };
        for(int k=0;k<i-1;k++){
            cout<<i-k-1<<" ";
        }
        cout<<endl;
}
    return 0;
}