#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sorted_array(vector<int> v1 , vector<int> v2){

    int low = 0;
    int start = 0;

    while(low<v2.size() && start<v1.size()){
        if ( v1[start] == 0 )
        {
             v1[start] = v2[low];
            start ++;
            low++;
        }
        else if( v1[start]<v2[low]){
            start ++;
        }
        else{
            for(int i=(v1.size()-1);i>start;i--){
                v1[i] = v1[i-1];
            }
            v1[start] = v2[low];
            low++;
            start++;
        }
        
    }
    for(auto i:v1){
        cout<<i<<" ";
    }

}

int main(){

    vector<int> v1 = {1, 2 , 3  , 0 , 0};
    vector<int> v2 = {4 ,5};

    merge_sorted_array(v1 , v2);

    return 0;
}