// My Method

#include<iostream>
using namespace std;

// int MoutedEle(int arr[] , int n , int start , int end){

//     int mid = start + ((end-start)/2);
//     int mounted_ele = INT16_MIN;

//     while( start <= end ){
//         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//             mounted_ele = mid;
//             break;
//         }
//         else if(arr[mid]<arr[mid-1]){
//         end = mid-1;
//     }
//     else{
//         start = mid+1;
//     }
//      mid = start + ((end-start)/2);
//     }

//     return mounted_ele;

// }


// Sir Function for same question

int MoutedEle(int arr[] , int n , int start , int end){

    int mid = start + ((end-start)/2);

    while( start < end ){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
        end = mid;
        }
        mid = start + ((end-start)/2);
    }
    return start;
}

int main(){

    int arr[] = {3 , 4 , 5 ,1};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;

    int ans = MoutedEle(arr,n,start,end);
    cout<<ans;

    return 0;
}