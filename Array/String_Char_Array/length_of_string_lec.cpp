#include<iostream>
using namespace std;

int getLength(char ch[]){

    int count =0;

    for(int i=0; ch[i] != '\0';i++){
       count++;
    }

    return count;

}

int main(){

    char ch[] ={'D','a','r','s','h','a','n','\0'};

    cout<<getLength(ch);

    return 0;
}