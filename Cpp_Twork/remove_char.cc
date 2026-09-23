/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 2

#include<iostream>
using namespace std;

int main()
{
    string str, result = "";
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            result += str[i];
        }
    }cout << "Updated string: " << result << endl;
    return 0;
}