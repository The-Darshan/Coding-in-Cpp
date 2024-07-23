#include<iostream>
using namespace std;

bool checkCharInt(char ch){

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

bool isPalindrome(char ch[] , int size){

    int s = 0;
    int e = size-1;

    while (s<=e)
    {
        if(!checkCharInt(ch[s])){
            s++;
        }
        else if(!checkCharInt(ch[e])){
            e--;
        }
        else if(toLowerCase(ch[s]) != toLowerCase(ch[e])){
            return false;
        }
        else{
            s++;
            e--;
        }

    }
    
    return true;

}

int getLength(char ch[]){

    int count =0;

    for(int i=0; ch[i] != '\0';i++){
       count++;
    }

    return count;

}

int main(){

    char ch[30];
    cin>>ch;
    cout<<ch;
    int size = getLength(ch);

    cout<<isPalindrome(ch,size);

    return 0;
}