// My Method

// #include<iostream>
// using namespace std;

// void binary_search(int arr[] , int n , int key , int start , int end){

//     int mid = start + ((end-start)/2);
//     int initial_indx = -1;
//     int last_indx = -1;

//     while( start <= end ){
//         if(arr[mid]==key){
//             initial_indx = mid;
//             last_indx = mid;
//             for(int i=mid-1;i>=0;i--){
//                 if(arr[i] == key){
//                     initial_indx = i;
//                 }
//             }
//             for(int i=mid+1;i<n;i++){
//                 if(arr[i] == key){
//                     last_indx = i;
//                 }
//             }
//             break;
//         }
//         else if(arr[mid]>key){
//             end = mid-1;
//             mid = start + ((end-start)/2);
//         }

//         else{
//             start = mid+1;
//             mid = start + ((end-start)/2);
//         }
//     }

//     cout<<initial_indx<<" "<<last_indx;

// }

// int main(){

//     int arr[] = {0 , 0 , 1 , 1 , 2 , 2 , 2 , 2};
//     int n = sizeof(arr)/sizeof(int);
//     int key= 2;
//     int start = 0;
//     int end = n-1;

//     binary_search(arr,n,key,start,end);

//     return 0;
// }

// SIR METHOD

#include<iostream>
using namespace std;

void firstOccurence(int arr[] , int n , int key , int start , int end){

    int mid = start + ((end-start)/2);
    int initial_indx = -1;

    while( start <= end ){
        if(arr[mid]==key){
            initial_indx = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
          mid = start + ((end-start)/2);
    }

    cout<<initial_indx<<" ";

}


void lastOccurence(int arr[] , int n , int key , int start , int end){

    int mid = start + ((end-start)/2);
    int initial_indx = -1;

    while( start <= end ){
        if(arr[mid]==key){
            initial_indx = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
          mid = start + ((end-start)/2);
    }

    cout<<initial_indx;

}



int main(){

    int arr[] = {2};
    int n = sizeof(arr)/sizeof(int);
    int key= 2;
    int start = 0;
    int end = n-1;

    firstOccurence(arr,n,key,start,end);
    lastOccurence(arr,n,key,start,end);

    // For total Occurence of any number  => (last_indx - start_indx) + 1 ;

    return 0;
}