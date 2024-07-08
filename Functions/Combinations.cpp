#include<iostream>
using namespace std;

int factorial(int no){
    int fact = 1;
for(int i=1;i<=no;i++){
    fact=fact*i;
}
return fact;
}

int combination(int n , int r){
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int main(){
    int a , b;
    cout<<"Enter Two numbers a and b : ";
    cin>>a>>b;

    cout<<"Combination is : "<<combination(a,b)<<endl;
    
    return 0;
}