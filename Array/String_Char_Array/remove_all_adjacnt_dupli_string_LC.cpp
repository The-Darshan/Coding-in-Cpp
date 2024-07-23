#include<iostream>
using namespace std;

string removeDuplicates(string str){

    int low = 0;
    int high = low+1;

    while(high<str.length()&&low>=0){
        if(str[low] != str[high]){
            low++;
            high++;
        }
        else{
            str.erase(low,2);
            low=0;
            high =low+1; 
        }
    } 

    return str;
    // TC => O(n^2);
}

string removeDuplicates2(string str){

    string temp = "";
    int i=0;

    while(i<str.length()){

        if(str[i] != temp.back() ){
            temp.push_back(str[i]);
        }
        else{
            temp.pop_back();
        }
    i++;
    }

    return temp;

}

int main(){

    string str = "aab";
    cout<<removeDuplicates2(str);

    return 0;
}