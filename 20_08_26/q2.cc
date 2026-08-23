/*
    Q2) WAC++P which accepts a letter and display it in uppercase.
    */
    
# include <iostream>
# include <cctype>
using namespace std;

int main(){
    char letter;
    cout << "Enter a letter:";
    cin >> letter;
    if(letter >= 'a' && letter <= 'z')
           letter = letter - 32;
    
    cout << "Uppercase: " << letter << endl;
    return 0;
}      