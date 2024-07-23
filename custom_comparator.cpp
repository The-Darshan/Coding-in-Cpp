#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// IN CASE OF COMPARATOR PASS VALUE BY REFERENCE , BECAUSE SORTING IS ALREADY A TIME CONSUMING PROCESS AND IF WE NOT PASS VALUE BY REFERENCE THEN IT WILL CREATE COPY AGAIN AND AGAIN WHENEVER THE FUNCTION IS CALLED , HENCE IT WILL TAKE MORE TIME . 

void print (vector<int> v){

    for(auto i:v){
        cout<<i<<" ";
    }

}

// bool mycomparator(int &a , int &b){

//     // return a<b;  increasing order sorting .
//     // return a>b; decreasing order sorting .

// }

void printvv(vector<vector<int>> &v){

    for (int i = 0; i < v.size(); i++)
    {

        vector <int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
    

}

bool mycompfor1stIndx( vector<int>&a , vector<int>&b){
    return a[1]<b[1]; // Increasing order .
}

int main(){

    // vector<int> v = {44,55,22,11,33};
    // sort(v.begin(),v.end(),mycomparator);
    // print(v);

    vector< vector<int>>v;    
    cout<<"Enter size : ";
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter  and b : "<<endl;
        int a , b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<endl;
    printvv(v);
    cout<<"Sorted by 1st index"<<endl;
    // sort(v.begin(),v.end()); Sorts using the 0 th index values of 2D array in increasing manner , it works like a[0]<b[0] . 
    sort(v.begin(),v.end(),mycompfor1stIndx);
    printvv(v);
    return 0;
}