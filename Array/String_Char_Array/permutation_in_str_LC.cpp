#include<iostream>
using namespace std;

bool checkEqual(int a[26] , int b[26]){

    for(int i=0;i<26;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;

}

bool permutation(string s1 , string s2){
    // character count array of s1.
    int count[26] = {0};

    for(int i=0;i<s1.length();i++){
        int indx = s1[i]-'a';
        count[indx]++;
    }

    int i=0;
    int windw = s1.length();
    int count2[26] = {0};
    // running for first window
    while (i<windw && i<s2.length())
    {
        int indx = s2[i]-'a';
        count2[indx]++;
        i++;
    }
    
    if(checkEqual(count, count2)){
        return true;
    };

    while(i<s2.length()){
        char ch = s2[i];
        int indx = ch - 'a';
        count2[indx]++;

        char oldchar = s2[i-windw];
        indx = oldchar-'a';
        count2[indx]--;
        i++;
        if(checkEqual(count, count2)){
        return true;
    }        
    }
    return 0;
}

int main(){

    string s1 = "ab";
    string s2 = "a";
    cout<<permutation(s1,s2);

    return 0;
}