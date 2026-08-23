 /*
Q2) P is 1D array of integer write a C++ function to search for a data "val" from P, 
    if val is present from array then function should return value 1 and 0 otherwise.
    */

#include <iostream>
using namespace std;

/* Function to search for 'val' in 1D array 'P' of a given 'size'
    returns 1 if found, 0 otherwise
    */
   
int searchVal(int P[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (P[i] == val) {
            return 1; // Value is present
        }
    }
    return 0; // Value is not present
}

int main() {
    int P[100] ;
    int size ;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[100], val ;
   cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> P[i];
    }
    cout << endl;
    
    // Displaying the array
    cout<<"ARRAY IS:" ;
    for (int i = 0; i < size; i++) {
        cout << P[i] << " ";
    }
    cout << endl;
    
    // Taking search input from user
    cout << "Enter the value to search: ";
    cin >> val;
    int result = searchVal(P, size, val); // Calling the function
    cout << "Function returned: " << result << endl; // Displaying the result
    if (result == 1) {
        cout << "Value is present in the array." << endl;
    } else {
        cout << "Value is not present in the array." << endl;
    }
    return 0;
}