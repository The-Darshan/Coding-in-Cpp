#include<iostream>
using namespace std;

int main(){    
    int a = 9 ;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }

    return 0;
}