// My Code

#include<iostream>
using namespace std;

int binarySearch(int arr[]  ,  int start , int end ,  int key ){
    // int mid = (start+end)/2; valid for smaller cases;

    int mid = start + (end -start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

// int Rotated_sorted_array(int arr[] , int start , int end , int pivot_ele , int key , int n ){


//     while(pivot_ele>=0 && pivot_ele<n){
//         if(arr[pivot_ele] == key){
//             return pivot_ele;
//         }
//         else if(arr[0]<key){
//             pivot_ele = pivot_ele-1;
//         }
//         else{
//             pivot_ele = pivot_ele+1;
//         }
//     }
//     return -1;
// }

// Code for finding pivot / minimum element in an array.
int Pivot_ele(int arr[] , int n , int start , int end){

    int mid = start + ((end-start)/2);

    while( start < end ){
        if(arr[mid]>=arr[0]){
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

    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    int key = 900;

    int ans = Pivot_ele(arr,n,start,end);   
    cout<<ans;

    if(key >= arr[ans] && key <= arr[n-1]){
      cout<<binarySearch(arr,ans,n-1,key);
    }
    else{
        cout<<binarySearch(arr,0,ans-1,key);
    }

    return 0;
}