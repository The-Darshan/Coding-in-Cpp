#include<iostream>
using namespace std;

bool validCharacter(char ch){

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || ( ch>='0' && ch<='9') ){
        return true;
    }
    else{
        return false;
    }

}

char toLowerCase(char ch){
    if((ch>='a' && ch <='z') || (ch>='0' && ch<='9') ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        //  For UpperCase => ch - 'a' + 'A';
        return temp;
    }
}

bool checkPalindrome(string a){

    int s = 0;
    int e = a.length()-1;

    while (s<=e)
    {
        
         if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }

    }
    
    return true;

}

bool isPalindrome(string str){
    // Faltu char hatao .
    string temp = "";

    for(int j=0;j<str.length();j++){
        if(validCharacter(str[j])){
            temp.push_back(str[j]);
        }
    }
    // lowerCase ma convert karo .
    for(int i=0;i<temp.length();i++){
        temp[i] = toLowerCase(temp[i]);
    }
    // check for palindrome . 
    return checkPalindrome(temp);
}

int main(){

    string str = "A man , a plan,a canal : Panama";

    cout<<isPalindrome(str);

    return 0;
}