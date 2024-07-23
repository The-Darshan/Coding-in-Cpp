#include<iostream>
#include<algorithm>
using namespace std;

void reverse_word(string str){
    string temp = " ";
    int length = str.length();
    int st = 0;
    int end = str.length()-1;
  while(st<length && str[st] == ' '){
    st++;
  }

 while(end>=0 && str[end] == ' '){
    end--;
  }

        int pointer =0;
        string temp2;
    for(int i=end;i>=st;i--){

        if(str[i] != ' '){
            temp2.push_back(str[i]);
        }
        else{
            reverse(temp2.begin()+pointer, temp2.end());
            temp2.push_back(' ');
            pointer = temp2.size();
            while(str[i-1] == ' '){
                i--;
            }
        }
    }
    reverse(temp2.begin()+pointer , temp2.end());

}

int main(){

    string str;
    cin>>str;
    reverse_word(str);

    return 0;
}