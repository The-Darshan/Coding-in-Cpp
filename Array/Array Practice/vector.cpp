#include <iostream>
#include<vector>
using namespace std;

void print (vector<int>v){
    // Method 1 ->
    // cout<<"Printing Vector"<<endl;;
    // for(int i=0;i<v.size();i++){
    //    cout<<v[i]<<" ";
    // cout<<v.at(i)<<endl; Functioning => same as v[i] but not used very much .
    // }

    // Method 2 ->
    // For each loop
    for(auto it : v){
        cout<<it<<endl;
    }
}

int main() {
    
    int n;
    cin>>n;
    vector<int> ans;

    vector<int> ans2(5,-1); // Creates an vector of size = 5 and all the vlaues in  the vector = -1 .

    vector<int> ans3 = {1,2,3,4,5}; // Creates an array with some given values

    vector<int> ans4{1,2,3,4,5};

    vector<int> ans5(ans4); // Copying vector ans4 in ans5 or initializing vector ans5 with ans4 values .

    cout<<"Front element:"<<ans5.back();

    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        ans3.push_back(n);
    }
    
    ans3.pop_back(); // Deletes an element from the end of the vector .

    // ans.clear(); Removes all the element from the vector i.e size = 0 but capacity remains the same .

    print(ans5);
    return 0;
}