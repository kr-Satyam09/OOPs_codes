/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 3

#include<iostream>
using namespace std;

int main()
{
    string str;
    int count[256] = {0};
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' '){
            count[(int)str[i]]++;
        }
    }char result[256];
    int k = 0;
    for (int i = 0; i < 256; i++){
        if (count[i] == 1){
            result[k] = (char)i;
            k++;
        }
    }
    for (int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - i - 1; j++){
            if (result[j] > result[j + 1]){
                char temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
    cout << "Non-repeating characters: ";
    for (int i = 0; i < k; i++){
        cout << result[i] << " ";
    }cout << endl;
    return 0;
}