/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 16

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

        friend Number operator-(Number &n);
        friend Number operator++(Number &n);
        friend Number operator++(Number &n, int);
        friend Number operator--(Number &n);
        friend Number operator--(Number &n, int);
};

Number operator-(Number &n){
    Number t;
    t.value = -n.value;
    return t;
}

Number operator++(Number &n){
    ++n.value;
    return n;
}

Number operator++(Number &n, int){
    Number t = n;
    n.value++;
    return t;
}

Number operator--(Number &n){
    --n.value;
    return n;
}

Number operator--(Number &n, int){
    Number t = n;
    n.value--;
    return t;
}

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