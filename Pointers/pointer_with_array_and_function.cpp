#include<iostream>
using namespace std;

// void print(int *p){

//     cout<<*p<<endl;

// }

// void update(int *p){

//     *p = *p+1;

// }

int get_sum(int *arr , int n){

    cout<<" size : "<<sizeof(arr)<<endl;

    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    // int arr[10] = {2,4,6} ;
    // cout<<"Address of first memory block is "<<arr<<endl;
    // cout<<"Address of first memory block is "<<&arr[1]<<endl;
    // cout<<&(*(arr+1));
    // int i = 1;
    // cout<<i[arr]<<endl;

    // int *p = arr;
    // cout<<p<<endl;

    // // Error
    // // arr = arr+1;

    // p = p+1;
    // cout<<p<<endl;

    // int a[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout<<a<<endl;
    // cout<<ch<<endl;

    // char *c = &ch[0];
    // // Prints the entire string
    // cout<<c<<endl;

    // char temp = 'z';
    // char *q = &temp;
    // cout<<q<<endl;

    // int value = 7;
    // int *t = & value;

    // // print(t);
    // cout<<value<<endl;
    // update(t);
    // cout<<value<<endl;

    // int arr[5] = {1,2,3,4,5};
    // cout<<get_sum(arr+3,2)<<endl;

    // char s[] = "hello ji";
    // char *p = s;
    // cout<<p[0];

    char st[] = "ABCD";
    cout << *(st) ;

    char *p = "aloo";
    cout<<p<<endl;

    return 0;
}