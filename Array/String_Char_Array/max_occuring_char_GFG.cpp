#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char max_occ_char(string str){

    int arr[26] = {0};

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int no = 0;
        if(ch>='a' && ch<='z'){
            no =  ch-'a';
        }
        else{
           no = ch-'A';
        }
        arr[no]++;
    }

    int max = -1 , ans = 0;
    for(int i=0;i<25;i++){
        if(max<arr[i]){
            max = arr[i];
            ans = i;
        }
    }

    char finalans = 'a'+ans;
    return finalans;
}

int main(){

    string str ;
    cin>>str;

    cout<<max_occ_char(str);

    return 0 ;
}