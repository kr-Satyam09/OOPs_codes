/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 14

#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;

    public:
        void input(){
            cin >> real >> img;
        }
        void display(){
            cout << real;
            if (img >= 0)
                cout << " + " << img << "i";
            else
                cout << " - " << -img << "i";
            cout << endl;
        }
        Complex operator+(Complex c){
            Complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }
        Complex operator-(Complex c){
            Complex t;
            t.real = real - c.real;
            t.img = img - c.img;
            return t;
        }
        bool operator==(Complex c){
            return (real == c.real && img == c.img);
        }
};


int main(){
    Complex c1, c2;
    cout << "Enter real and imaginary part of 1st complex number: ";
    c1.input();
    cout << "Enter real and imaginary part of 2nd complex number: ";
    c2.input();
    cout << "\n1st number:  ";
    c1.display();
    cout << "2nd number: ";
    c2.display();
    cout << "\nSum:        ";
    (c1 + c2).display();
    cout << "Difference: ";
    (c1 - c2).display();
    if (c1 == c2)
        cout << "\nThe two complex numbers are equal\n";
    else
        cout << "\nThe two complex numbers are not equal\n";
    return 0;
}