#include<iostream>
using namespace std;

int main(){ 
    int a =1;
    for(int i=1;i<5;i++){
        for(int j=0;j<4-i;j++){
            cout<<" ";
        };
    
    for(int j=0;j<i;j++){
            cout<<a;
            a++;
    }
    cout<<endl;
}
    return 0;
}