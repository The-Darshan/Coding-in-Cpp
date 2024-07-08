#include<iostream>
using namespace std;

void move_zeros(int arr[] , int n){

   int i=0;

    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }        
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){

    int arr[] = { 0 , 1 , 0 , 3 , 12 };
    int n = sizeof(arr)/sizeof(int);

    move_zeros(arr,n);

    return 0;

}