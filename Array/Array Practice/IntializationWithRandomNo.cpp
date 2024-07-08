//How to intialize an array with any value.
#include<iostream>
using namespace std;

int main(){

    int arr[100];
    fill_n(arr, 100, 10);
    cout<<arr[70];

    return 0;
}
