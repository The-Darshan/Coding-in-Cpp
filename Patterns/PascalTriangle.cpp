#include<iostream>
using namespace std;

// int factorial(int a){
//     int ans = 1 ;

//     for(int i=1;i<=a;i++){
//         ans = ans*i; 
//     }

//     return ans;
// }

// int combination(int i ,int j){
//     return factorial(i)/(factorial(j)*factorial(i-j))    ;
// }

int main(){

    int n;
    cin>>n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //        int ans = combination(i,j);
    //        cout<<ans<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }

    return 0;
}