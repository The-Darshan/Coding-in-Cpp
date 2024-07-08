#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key){

    for(int i =0; i<size ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
 

int main(){

    int n,key;
    cout<<"Enter the size of array : "; 
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to be searched : ";
    cin>>key;

    bool found = search(arr,n,key);

    if(found){
        cout<<"Key is present"<< endl;
    }
    else{
        cout<<"Key is absent"<< endl;
    }


    return 0;
}