#include<iostream>
using namespace std;

void print_wave(int arr[][4] , int row , int col){
    
    for(int i=0;i<col;i++){
        if(i%2 ==0){
        for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
        }}
        else{ 
            // if we want to convert else into if condition => (i & 1) because i % 2 will come 1 when i is odd and 1 & 1 gives true , in that case the below code runs.
             for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
        }
        }
    }
//    Time Complexity => o(mn) : m = no of rows , n = no of colums ; 
}

int main(){
      
    int arr[4][4];

    // Row wise input 
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    print_wave(arr,4,4);
  
    return 0;
}