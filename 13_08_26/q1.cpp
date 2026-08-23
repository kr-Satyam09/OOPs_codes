/* 
Q1) Write a function call named zero_small that has two int arguments being passed by reference 
    and sets smaller of two numbers to zero write the main program to access the function.
    */
   
#include <iostream>
using namespace std;
void zero_small(int &a, int &b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0; // This handles both b < a and when both numbers are equal
    }
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "\nBefore function call: num1 = " << num1 << ", num2 = " << num2 << endl;
    zero_small(num1, num2);
    cout << "After function call:  num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}    