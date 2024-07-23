#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Method 1
void Common_Element2(int arr1[] , int arr2[] , int arr3[] , int n1 , int n2 , int n3){

    int i=0,j=0,k=0;
    set<int> st; // Stores only unique element.
    vector <int> ans;

    while(i<n1 && j<n2 && k<n3 ){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }

    for(auto it:st){
        ans.push_back(it);
    }
// Ans in ans vector.
}

// METHOD 2 (Remove Repeated element)

int remove_repeated(int arr1[] , int arr2[] , int arr3[] , int n1 , int n2 , int n3){

     int i=0,j=0,k=0;
    vector <int> ans;

   while (i < n1 && j < n2 && k <n3) {
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k]) {
            ans.push_back(arr1[i]);
            int common_element = arr1[i];
            
            // Move all pointers forward to skip duplicates
            while (i < n1 && arr1[i] == common_element) i++;
            while (j < n2 && arr2[j] == common_element) j++;
            while (k < n3 && arr3[k] == common_element) k++;
        } 
        // Move the pointer for the smallest value forward
        else if (arr1[i] < arr2[j]) {
            i++;
        } 
        else if (arr2[j] < arr3[k]) {
            j++;
        } 
        else {
            k++;
        }
    }

    for(auto it:ans){
        cout<<it<<" ";
    }

}

int main(){

    int arr1[] = {1, 5, 10, 20, 40, 80} ;
    int arr2[] = {6, 7, 20, 80, 100} ;
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    int n3 = sizeof(arr3)/sizeof(int);

    // Method 1 =>
    // Time Complexity => O(n1+n2+n3)
    // Space Complexity => O(n1) when a1 = { 1, 2,3 ,4 ,5} a2={1 , 2,3 ,4,  5} ad a3 = {1 ,2 ,3 , 4,5}
    Common_Element2(arr1,arr2,arr3,n1,n2,n3);

    // Method 2 =>
    // Removes the repeated element 
    remove_repeated(arr1,arr2,arr3,n1,n2,n3);
    // Print the Vector.

    return 0;

}