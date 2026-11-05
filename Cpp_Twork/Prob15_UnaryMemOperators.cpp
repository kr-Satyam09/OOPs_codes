/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 15

#include<iostream>
using namespace std;

class Number{
    private:
        int value;

    public:
        void input(){
            cin >> value;
        }

        void display(){
            cout << value << endl;
        }
        Number operator-(){
            Number t;
            t.value = -value;
            return t;
        }
        Number operator++(){
            ++value;
            return *this;
        }
        Number operator++(int){
            Number t = *this;
            value++;
            return t;
        }
        Number operator--(){
            --value;
            return *this;
        }
        Number operator--(int){
            Number t = *this;
            value--;
            return t;
        }
};


int main(){
    Number n, neg;
    cout << "Enter an integer: ";
    n.input();
    neg = -n;
    cout << "\nUnary minus (-n): ";
    neg.display();
    cout << "Pre-increment (++n): ";
    (++n).display();
    cout << "Post-increment (n++): ";
    (n++).display();
    cout << "Value of n now: ";
    n.display();
    cout << "\nPre-decrement (--n): ";
    (--n).display();
    cout << "Post-decrement (n--): ";
    (n--).display();
    cout << "Value of n now: ";
    n.display();
    return 0;
}