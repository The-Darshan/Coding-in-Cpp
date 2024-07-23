#include<iostream>
using namespace std;

void replace_spaces(string str){

    string temp = "";

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }

}
cout<<temp;
}

void replace_spaces_without_new_string(string str){

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            str.replace(i,1,"@40");
        }
    }

    cout<<str;

}

int main(){

    string str = "My Name is Darshan";
    replace_spaces_without_new_string(str);
    
    return 0;
}