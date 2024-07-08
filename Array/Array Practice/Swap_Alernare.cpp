#include<iostream>
#include"assert.h"
using namespace std;

void ReverseAlternateNumberInArray(int arr[],int n){

for(int i=0;i<n;i+=2){
    if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
}

}
void printArray(int arr[] ,int n){
    
    cout<<"Printing the alternate array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;

    assert(n>0);

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ReverseAlternateNumberInArray(arr,n);

    printArray(arr,n);

    return 0;
}

// IP = [1 , 2, 3 , 4 , 5 ]
// OP = [2 , 1 , 4 , 3 ,5]