#include<iostream>
using namespace std;

void reverse(char ch[] , int n){

    int s = 0;
    int e = n-1;

    while(e>s){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }

}

int main(){

    int n; cin>>n;
    char ch[n];
    int size = sizeof(ch)/sizeof(char);

    cin>>ch;

    reverse(ch,size);
    cout<<ch;

    return 0 ;
}