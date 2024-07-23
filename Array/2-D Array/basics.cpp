#include<iostream>
#include<vector>
using namespace std;

bool isPresent(int arr[][4] , int target , int row , int col){

     for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               if(arr[i][j] == target){
                return 1;
               }
            }
        }
return 0;
// TC => O(mn) : m = no of row , n = no of column ;
}

int main(){
        // Giving Hard-corded values
        // int arr[3][4] = {1, 2, 3, 4 ,5 ,6, 6,7, 7, 7 , 1 , 1};
        // int arr[3][4] = {{1,2,3,4},{10,20,30,40},{100,200,300,400}};

        int arr[3][4];

    // Row wise input 
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }

    // Column wise input
    //   for(int i=0;i<4;i++){
    //         for(int j=0;j<3;j++){
    //             cin>>arr[j][i];
    //         }
    //     }

        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    cout<<"Enter the element to be search "<<endl;
    int target; cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }


                         // 2D Array using Vector

    // vector< vector<int>>v;    
    // cout<<"Enter size : ";
    // int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter  and b : "<<endl;
    //     int a , b;
    //     cin>>a>>b;
    //     vector<int>temp;
    //     temp.push_back(a);
    //     temp.push_back(b);
    //     v.push_back(temp);
    // }
    // cout<<endl;

                    //        Printing the Vector

    //     for (int i = 0; i < v.size(); i++)
    // {

    //     vector <int>&temp = v[i];
    //     int a = temp[0];
    //     int b = temp[1];
    //     cout<<a<<" "<<b<<endl;
    // }
        
    // No of Rows in 2D array = vector.size();
    // No of Columns in 2D array = vector[0].size();
    // Total elements = rows*columns;

    return 0;
}