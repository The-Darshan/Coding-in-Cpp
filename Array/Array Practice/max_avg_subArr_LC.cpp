#include<iostream>
using namespace std;

// MY METHOD ( TLE ) =>
double max_avg_subarr(int arr[] , int n , int k){

    double maxi =INT16_MIN;

    for(int i=0;i<=n-k;i++){
        double avg = 0;
        for(int j=i;j<k+i;j++){
            avg = avg + arr[j];
            cout<<avg<<endl;
        }
        avg = avg/k;
        if(avg>maxi){
            maxi = avg;
        }
    }
return maxi;
// TC => O(n^2);
}

// Sirs brute force method (Modification in my code only)
double max_avg_subarr2(int arr[] , int n , int k){

    int max_sum= INT16_MIN;
    int i=0;
    int j=k-1;

    while(j<n){
        int sum = 0;
        for(int y=i;y<=j;y++){
            sum+=arr[y];
        }
        max_sum = max(sum,max_sum);
        ++i;++j;
    }
    return max_sum/(double)k; // Since both are integers so int/int gives integer only . Thereore , we type casted the value of k into double . 

    // TC => O(n^2);
}

double slidingWindw(int arr[] , int n , int k){

    int i=0;
    int j=k-1; 
    int sum = 0;

    for(int y=i;y<=j;y++){
        sum += arr[y];
    }
    int max_sum = sum;
    j++;

    while(j<n){

        sum-= arr[i++];
        sum += arr[j++];
        max_sum = max(max_sum,sum);
    }
return max_sum / (double) k;

// TC => O(n);

}

int main(){

    int arr[] = {1,12,-5,-6,50,3};
    int k= 4;
    int n = sizeof(arr)/sizeof(int);

    cout<<slidingWindw(arr,n,k);


    return 0;
}