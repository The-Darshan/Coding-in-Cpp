#include<iostream>
using namespace std;

long long int squareRoot(int n){

    int start = 0;
    int end = n;
    long long  int ans = -1;
    long long int mid = start + (end-start)/2;
    long long int square = mid * mid;

    while(start<=end){
        if(square== n){
            return mid;
        }
        else if(square>n){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
         mid = start + (end-start)/2;
    }
    return ans;
}

double morePrecision ( int n , int precision , int tempsol){

    double ans = tempsol;
    double factor = 1;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n = 101;

    int ans = squareRoot(n);
    cout<<morePrecision(n , 4 , ans);

    return 0;

}