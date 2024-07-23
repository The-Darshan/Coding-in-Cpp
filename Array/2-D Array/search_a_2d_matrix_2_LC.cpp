// Also be called as binary search in 2D Matrix . 
#include<iostream>
using namespace std;

bool binary_search(int arr[][4] , int row , int col , int target){

    int start = 0;
    int end = col-1;

    while(start<row && end>=0){
        int ele = arr[start][end];

        if(ele == target){
            return 1;
        }
        else if(ele>target){
            end-- ;
        }
        else{
            start++ ;
        }
    }

    return 0;
    
// Time Complexity => O(n+m) : n = no of rows , m = no of colums ;

}

int main(){
      
    int arr[3][4];

    // Row wise input 
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }   

        cout<<"Enter the target to be searched : "<<endl;
        int target ; cin>>target;

        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    cout<<binary_search(arr,3,4,target);
  
    return 0;
}// Also be called as binary search in 2D Matrix . 
#include<iostream>
using namespace std;

bool binary_search(int arr[][4] , int row , int col , int target){

    int start = 0;
    int end = (row*col)-1;

    int mid = start + (end-start)/2;

    while(end>=start){
        int ele = arr[mid/col][mid%col];

        if(ele == target){
            return 1;
        }
        else if(ele>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    return 0;
    
// Time Complexity => O( log(n*m) ) : n = no of rows , m = no of colums ;

}

int main(){
      
    int arr[3][4];

    // Row wise input 
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }   

        cout<<"Enter the target to be searched : "<<endl;
        int target ; cin>>target;

        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    cout<<binary_search(arr,3,4,target);
  
    return 0;
}