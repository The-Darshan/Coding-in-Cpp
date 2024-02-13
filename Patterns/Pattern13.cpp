#include<iostream>
using namespace std;

int main(){ 
    int a =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<char('A'+a)<<" ";
            a++;
        }
        cout<<endl;
    }

    return 0;
}