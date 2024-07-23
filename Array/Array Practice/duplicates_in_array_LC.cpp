#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void hashed_ans(int arr[], int n) {
    int arr2[n] = {0}; // this will hold the counts
    int k = 0;
    int count = 1; // start with 1 because we have seen arr[0] once

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            // arr2[k] = count; // save the count
            if (count > 1) {
                cout << arr[i - 1] << " ";
            }
            // k++;
            count = 1; // reset the count for the new number
        }
    }
    // handle the last group of numbers
    // arr2[k] = count;
    if (count > 1) {
        cout << arr[n - 1] << " ";
    }
}

int main() {
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n);

    hashed_ans(arr, n);

    return 0;
}
