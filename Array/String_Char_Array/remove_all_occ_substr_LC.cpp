#include<iostream>
using namespace std;

string remove_all_occ_substr(string str , string smallstr){

    while(str.length() != 0 && str.find(smallstr) < str.length()){
        str.erase(str.find(smallstr),smallstr.length());
    }
    return str;
}

int main(){

    string str = "daabcbaabcbc";
    string smallstr = "abc";
    cout<<remove_all_occ_substr(str,smallstr);


    return 0;
}