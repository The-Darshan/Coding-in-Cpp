#include<iostream>
using namespace std;

// BY OWN METHOD 

// int setBit(int a){
//     int count =0;
//     int remainder; 
//     while(a>0){
//         remainder = a%2;
//         if(remainder==1){
//             count++;
//         };
//         a=a/2;
//     }
//     return count;
// }

// int main(){
//     int a ,b ;
//     cout<<"Enter the 1st number : ";
//     cin>>a;

//     cout<<"Enter the 2nd term : ";
//     cin>>b;    

//     int bitInA = setBit(a);
//     int bitInB = setBit(b);

//     cout<<"Total Number of Bit 1 is :"<<bitInA+bitInB;

//     return 0;
// }

// BY SIR'S METHOD =>

// Use bitwise operator as much as you can because in computer all the data is stored in bits . So its a faster way.

// any number &(bitwise and) 1 gives the last digit of the number and after checking for the last bit we can right shift the number to get the second last bit . 
int setBit(int a){
    int count = 0;
    while(a>0){
        int n = a&1;
        if(n==1){
            count++;
        };
        a=a>>1;
    }
    return count;
}

int main(){

  int a ,b ;
    cout<<"Enter the 1st number : ";
    cin>>a;

    cout<<"Enter the 2nd term : ";
    cin>>b;    

     int bitInA = setBit(a);
    int bitInB = setBit(b);

    cout<<"Total Number of Bit 1 is :"<<bitInA+bitInB;

    return 0; 
}