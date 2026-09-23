/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 1

#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter number of users: ";
    cin >> n;
    string names[n];
    int units[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter name of user " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter units consumed by " << names[i] << ": ";
        cin >> units[i];
    }
    cout << "\nUSER CHARGES:\n";
    for (i = 0; i < n; i++)
    {
        double amount = 0.0;
        int u = units[i];
        if (u <= 100)
        {
            amount = u * 0.60;
        }else if (u <= 300)
        {
            amount = 100 * 0.60 + (u - 100) * 0.80;
        }else{
            amount = 100 * 0.60 + 200 * 0.80 + (u - 300) * 0.90;
        }if (amount < 50){
            amount = 50;
        }if (amount > 300){
            amount = amount + amount * 0.15;
        } cout << names[i] << " : Rs " << amount << endl;
    }
    return 0;
}