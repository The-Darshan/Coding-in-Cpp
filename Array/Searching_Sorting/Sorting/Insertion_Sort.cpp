#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){

    for(int i=1;i<n;i++){

        int ele = arr[i];
        int j=i-1;
        for(; j>=0 ; j--){

            if(arr[j]>ele){

                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = ele;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[] = { 10 , 1 , 7 , 4 , 8 , 2 , 11 };
    int n = sizeof(arr)/sizeof(int);

    insertion_sort(arr,n);

    return 0;

}