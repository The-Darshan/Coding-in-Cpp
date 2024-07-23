#include<iostream>
using namespace std;

void spiral_print(int arr[][4] , int row , int col){

    int starting_row = 0;
    int starting_col = 0 ;
    int ending_row = row-1 ;
    int ending_col = col-1 ;  

    int total = row*col;
    int count =0;

    while(count<total){

        for(int i=starting_row;count<total&&i<=ending_col;i++){
            cout<<arr[starting_row][i]<<" ";
            count++;
        }
        starting_row++;

        for(int i=starting_row;count<total&&i<=ending_row;i++){
            cout<<arr[i][ending_col]<<" ";
            count++;
        }
        ending_col--;

        for(int i=ending_col;count<total&&i>=starting_col;i--){
            cout<<arr[ending_row][i]<<" ";
            count++;
        }   
        ending_row--;

        for(int i=ending_row;count<total&&i>=starting_row;i--){
            cout<<arr[i][starting_col]<<" ";
            count++;
        }        
        starting_col++;

    }

    // Time Complexity = O(n*m) : n => no of rows , m => no of columns ;
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

    spiral_print(arr,3,4);
  
    return 0;
}