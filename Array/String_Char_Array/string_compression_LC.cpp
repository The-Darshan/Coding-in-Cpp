#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& ch){
// leet
    int i=0;
    int ansIndx = 0;
    int n = ch.size();

    while(i<n){
        int j= i+1;
        while(j<n && ch[i] == ch[j]){
            j++;
        }
        ch[ansIndx++] = ch[i];
        int count = j-i;

        if(count>1){
            string cnt = to_string(count);
            for(char digit: cnt){
                ch[ansIndx++] =digit; 
            }
        }

        i=j;
    }
    return ansIndx;
}

int main(){

    vector<char> ch ;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('b');
    ch.push_back('b');
    ch.push_back('b');
    ch.push_back('b');
    ch.push_back('b');
    ch.push_back('b');


    cout<<compress(ch);

    return 0;
}