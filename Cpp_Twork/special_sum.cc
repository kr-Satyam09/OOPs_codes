/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 4

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxSum = -1000000; // very small initial value to handle negatives
    for (int i = 0; i < n; i++) {
        int pos = i, grpSize = 1, Sum = 0;
        while (pos + grpSize <= n){
            for (int j = pos; j < pos + grpSize; j++){
                Sum += arr[j];
            }
            pos += grpSize;
            grpSize++;
        }if (Sum > maxSum){
            maxSum = Sum;
        }
    }cout << "Maximum special sum: " << maxSum << endl;
    return 0;
}