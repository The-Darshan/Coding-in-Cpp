#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n; 
    cin>>n;
   
        int count =0;
        vector<bool> prime(n,true);

        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;

                for(int j=2*i;j<n;j=j+i){
                    prime[j] = 0;
                }
            }
        }
    cout<<count;
// TC => n/2 + n/3 + n/5 + n/7 + n/11 + ........ => O(n log(logn)); comes through HP progression by using concepts of Taylor Series.
return 0;
}