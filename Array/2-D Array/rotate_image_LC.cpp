#include<iostream>
#include<algorithm>
using namespace std;

// Brute force Solution =>

// Declare another matrix ans[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
//  ans[j][n-1-i] = arr[i][j];
// }}

// TC=>O(n^2) : SC=>O(n^2);

// My solution 70% by myself 
void rotate_90(int arr[][4] , int row , int col ){

    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<col;i++){
        reverse(arr[i].begin(),arr[i].end());
    }


    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
// SC => O(1) : TC => O(n/2 * n/2) + O(n*n/2) => O(n^2);
}

int main(){

    int arr[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

   rotate_90(arr,4,4);

    return 0;
}