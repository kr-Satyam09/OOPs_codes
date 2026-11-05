/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 23

#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

int largest_proper_divisor(int n){
    if (n < 2)
        throw invalid_argument("the largest proper divisor is not defined for n=" + to_string(n));
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return n / i;
    } return 1;
}

void process_input(int n){
    try{
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch (const invalid_argument &e){
        cout << e.what() << endl;
    }
    cout << "returning control flow to the caller" << endl;
}

int main(){
    int n;
    cout << "Enter an integer n: ";
    cin >> n;
    process_input(n);
    return 0;
}