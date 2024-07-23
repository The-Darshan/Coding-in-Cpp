#include<iostream>
using namespace std;

int main(){

    int num = 5;
    char a = 'c';

    // Address of (&) Operator => It is used to obtain the memory address of a variable. 

    cout<<"Address of  variable is : "<<&num<<endl;

    int * ptr = & num ;
    char *pt = &a;
    cout<< " Value is : "<< *ptr<<endl;
    cout<<" Address is : "<<ptr<<endl;
    // Size of pointer remains same despite of different data types pf pointer i.e. either 8 or 4 depending on the machine.
    cout<<" Size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<" Size of pointer is : "<<sizeof(pt)<<endl;

    // Bad Practice =>
    // Pointer to int is created , and pointing to some garbage address . 
    // int *p;

    // Null Pointer =>
    int *p =0;
      cout<<p<<endl;
    // int *p: This declares p as a pointer to an integer (int *).
    // = 0: This initializes p with the value 0
    // cout<<*p<<endl;
    // Accessing the value at null pointer gives the segmentation fault/no response .
    p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;

    // Copying a pointer =>

    int *q = p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    // Pointer Arithmetic (Important) =>

    int i=3;
    int *t = &i;
    // cout<<++(*t)<<endl;
    *t = *t +1;
    cout<<*t<<endl;
    cout<<i<<endl;

    cout<<"before t"<<t<<endl;
    t=t-4;
    cout<<"After adding 1 to t"<<t<<endl; 

    void * s;
    int w = 10;
    // assign int address to void
    s = & w;
    cout << "Address of variable i " << & w << endl;
    cout << "Address where the void pointer is pointing " << s <<  endl;

    return 0;
}