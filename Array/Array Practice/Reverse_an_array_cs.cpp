#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_arry(vector<int> v , int m){

    int f = m+1;
    int l= v.size()-1;

    while(l>=f){
        swap(v[l],v[f]);
        l--;
        f++;
    }

    return v;
}

int main(){

    vector <int>v;
    cout<<"Enter the number of elements : ";
    int n ; cin>>n;

    cout<<"Enter the index after which swapping happens : ";
    int m ; cin>>m;

    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int num ;
        cin>>num;
        v.push_back(num);
    }

    vector<int> ans = reverse_arry(v,m);

    cout<<"Reversed Array is : ";
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}