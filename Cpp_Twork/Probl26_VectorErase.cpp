/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 26

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, x, a, b, t;
    vector<int> v;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++){
        cin >> t;
        v.push_back(t);
    }
    cout << "Enter position x of element to erase: ";
    cin >> x;
    v.erase(v.begin() + x - 1);
    cout << "Enter range a and b (a inclusive, b exclusive): ";
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}