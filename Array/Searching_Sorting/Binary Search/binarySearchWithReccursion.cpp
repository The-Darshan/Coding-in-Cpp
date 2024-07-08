#include<iostream>
using namespace std;

int binarySearch(int arr[] , int start , int end , int key ){
    // int mid = (start+end)/2; valid for smaller cases;

    int mid = start + (end -start)/2;

    if(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        binarySearch(arr,mid+1,end,key);
    }
    else{
        binarySearch(arr,start,mid-1,key);
    }
    }
    else{
        return -1;
    }
}

int main(){

    int n , key;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched : ";
    cin>>key;

    int elementAtIndex = binarySearch(arr,0,n-1,key);
    if(elementAtIndex != -1){
        cout<<"Element found at index "<<elementAtIndex;
    }
    else{
        cout<<"Element is not Present";
    }

    return 0;
}