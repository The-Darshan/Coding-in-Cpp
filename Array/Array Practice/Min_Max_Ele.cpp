#include<iostream>
using namespace std;

int MaxEleFinder(int a[], int size){
    int max_ele = a[0];

    for(int i=1;i<size;i++){

        // Predefined function for finding max element in an array.
        // max_ele= max(max_ele,a[i]);

        if(a[i]>max_ele){
            max_ele=a[i];
        }
    }
    return max_ele;
}

int MinEleFinder(int a[],int size){
      int min_ele = a[0];

      for(int i=1;i<size;i++){

        // Predefined function for finding min element in an array.
        // min_ele= min(min_ele,a[i]);

        if(a[i]<min_ele){
            min_ele=a[i];
        }
    }
    return min_ele;
}

int main(){
    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_ele = MaxEleFinder(arr,n);
    cout<<"Max element of array is : "<<max_ele<<endl;

    int min_ele = MinEleFinder(arr,n);  
    cout<<"Min element of array is : "<<min_ele<<endl;

    return 0;
}