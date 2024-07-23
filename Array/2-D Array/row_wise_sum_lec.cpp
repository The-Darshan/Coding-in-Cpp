#include<iostream>
using namespace std;

void row_sum(int arr[][4] , int row , int col){
    
    int sum = 0;

     for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum += arr[i][j];
            }
            cout<<sum<<endl;
            sum = 0;
        }
}

void col_sum(int arr[][4] , int row , int col){
    
    int sum = 0;

     for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                sum += arr[j][i];
            }
            cout<<sum<<endl;
            sum = 0;
        }
}

void largest_sum_row(int arr[][4] , int row , int col){
    
    int sum = 0;
    int num=-1;
    int maxi = INT16_MIN;

     for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum += arr[i][j];
            }
            if(maxi<sum){
                maxi=sum;
                num=i;
            }
            sum=0;
        }
        cout<<maxi<<" "<<num;
}

int main(){
      
        int arr[3][4];

    // Row wise input 
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    largest_sum_row(arr,3,4);
  
    return 0;
}