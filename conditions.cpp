#include<iostream>
using namespace std;

int main(){
    int i = 1;
for(;;){
    //for loop without intialization , condition and updation and it is a infinite loop bcz there is no condition/statement for the breaking of the loop. Agar i 6 ho gya to if case nhi chalega par ye loop ma rhega infinitly.
    if(i<5){
        cout<<"Apple";
        i=i+1;
    }
}

    return 0;
}