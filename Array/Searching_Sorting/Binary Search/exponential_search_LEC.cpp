// Also known as Doubling , Galloping and Stranik Search . 
// can apply to sorted array only .
// Application => 
// 1) Majorly used in very large size / unbounded /infinite size array .
// 2)Better than BS if k/element to be found is near beginning and elements in array is 100000/very large .
#include<iostream>
using namespace std;

int bs(int a[] , int start , int end , int k){

    while(start<=end){
        int mid = start + (end-start)/2;
        if(a[mid] == k){
            return mid;
        }
        else if(a[mid]<k){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
return -1;
}

int expoSearch(int a[] , int n , int k){

if(a[0] == k) return 0;

    int i=1;
    while(i<n && a[i]<=k)
    {
        i= i<<1;
    }

    return bs(a,i/2,min(i,n-1),k);

}

int main(){

     int a[] = {3,4,5,6,11,13,14,15,56,70};
     int n = sizeof(a)/sizeof(int);
     int k = 13;
     int ans = expoSearch(a,n,k); 
     cout<<ans; 

    return 0;
}