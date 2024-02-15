//M1 by jo mena socha

#include<iostream>
using namespace std;

int main(){ 
int n= 4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

       for(int j=0;j<(2*i-1);j++){
        cout<<"*";
       }
       cout<<endl;
    }

    return 0;
}

// Method 2 for same pattern

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int k=0;
        for(int j=0;j<(2*n)-1;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k<((2*i)+1)){
                cout<<"*";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}