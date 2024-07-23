#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate_arr( int arr[] , int n , int rotate_no){

    while(rotate_no>0){

        int temp = arr[n-1];

        int i = n-1;
        for(;i>0;i--){
            arr[i] = arr[i-1];
        }

        swap(arr[i],temp);
        rotate_no--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

// Sir Method

void rotate_arr(vector<int> v, int rotate_no){

    vector<int> temp(v.size());

    for(int i=0;i<v.size();i++){
        temp[(i+rotate_no)%v.size()] = v[i];
    }
    v = temp;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// Reverse Method
void reverse_rotate_arr(vector<int> v , int rotate_no){

    rotate_no = rotate_no % v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+rotate_no); 
    // v.begin() tells us the starting index whereas v.begin()+2 tells that 2 elements need to be reversed .
    reverse(v.begin()+rotate_no, v.end());
    // in reverse first vlaue tells the starting index and second value tells the number of elemts to be reversed.

    for(int i:v){
        cout<<i<<" ";
    }

}

int main(){

    vector<int> v = {-1,-100,3,99};
    int rotate_no = 2;

    reverse_rotate_arr(v, rotate_no);

    return 0;
}