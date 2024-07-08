#include<iostream>
using namespace std;

// int main(){

//     int num = 2;

//     cout<<endl;

//     switch (num)
//     {
//     case 1 : cout<<"First"<<endl;
//         break;
    
//     case 2 : cout<<"Second"<<endl;
//         break;
//     default: cout<<"It is a default case"<<endl;
//     }

//     cout<<endl;

// }
// Default case is not mandatory without it the code will run nut nothing will print . 
// Expression in the switch case will be int or char . It will not take bool , double or float and any other data type .
// Ek break ek hi loop ko break karta h.


// Exit Code

// #include<iostream>
// using namespace std;

// int main(){
// int num =1;
//    while(1){

//     cout<<"Aloo";
//     switch(num){
//         case 1:exit(1);
//     };
//     cout<<"Began";
//    }
// }

// Continue Case

// int main(){
// int num =1 ;

// switch (num){
//     case 1: continue; 
// Error is shown by the compiler when we use continue in switch
//     case 2 : cout<<"Second";
//         break;


// }
// }

//  Calculator
 
// int main(){ 

// int a ,b;
// cout<<"Enter two number a and b :"<<endl;
// cin>>a>>b;
// char opr;
// cout<<"Enter the Operator : ";
// cin>>opr;

// switch(opr){
//     case '+': cout<<"Addition of two number is : "<<a+b<<endl;
//     break;  

//      case 'x': cout<<"Multiplication of two number is : "<<a*b<<endl;
//     break;  

//      case '-': cout<<"Subtraction of two number is : "<<a-b<<endl;
//     break;  

//      case '/': cout<<"Divison of two number is : "<<a/b<<endl;
//     break;  

//     default : cout<<"Not valid Operator";
// }
// }

// Amount Calculator

int main(){

    int amount ,op=1;
    int ans;
    cout<<"Enter the amount : ";
    cin>>amount;

    switch(op){

        case 1: ans=amount/100;
        cout<<"Hundred note :"<<ans<<endl;
        amount=amount-ans*100;

        case 2:ans=amount/50;
         cout<<"Fifty note :"<<ans<<endl;
        amount=amount-ans*50;

        case 3:ans= amount/20;
         cout<<"Twenty note :"<<ans<<endl;
        amount=amount-ans*20;

        case 4:ans=amount/1;
         cout<<"One note :"<<ans<<endl;
        amount=amount-ans*1;

    }

}