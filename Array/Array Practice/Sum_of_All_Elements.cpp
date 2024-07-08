#include<iostream>
#include"assert.h"
using namespace std;

int SumofAllElementsInArray(int a[],int size){
    
    int sum=a[0];

    for(int i=1;i<size;i++){
        sum = sum + a[i];
    }

    return sum;

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

    int sum= SumofAllElementsInArray(arr,n);
    cout << "Sum of all elements in array is: " << sum <<endl;  

    return 0;
}