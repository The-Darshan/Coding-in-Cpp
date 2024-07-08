#include<iostream>
using namespace std;
    
// Same as Painter Painting Problem .

bool isPossible(int arr[] , int n , int m , int mid){

    int studentCount = 1;
    int page_sum = 0;

    for(int i=0 ; i<n ; i++){
        if(page_sum + arr[i] <= mid){
            page_sum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            page_sum = arr[i];
        }
    }
return true;
}

int allocatedBooks(int arr[] , int n , int m ){

    int s = 0;
    int sum =0;

    for(int i=0 ; i< n;i++){
        sum += arr[i];
    }

    int ans = -1;
    int e=sum;

    int mid = s + (e -s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e -s)/2;
    }

    return ans;
}

int main(){

    int arr[] = { 25, 46 , 28 ,  49 ,  24};
    int n =sizeof(arr)/sizeof(int);
    int m = 4;
    cout<<allocatedBooks(arr,n,m);


}