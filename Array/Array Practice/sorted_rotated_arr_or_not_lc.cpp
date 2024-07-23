#include<iostream>
#include<vector>
using namespace std;

bool check ( vector<int> v){

   int count = 0;

   for(int i=0;i<v.size();i++){

    if(v[i]>v[((i+1)%v.size())]){
        count++;
    }

   } 

   return count<=1;

}


int main(){

    vector<int> v = {1,2,3};
    cout<<check(v);

    return 0;
}