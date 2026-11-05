/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 18

#include<iostream>
using namespace std;

class A{
    static int calls;
    public:
        void func(int &v){
            v = v * 2;
            calls++;
        }
        static int getCalls(){
            return calls;
        }
};
int A::calls = 0;

class B{
    static int calls;
    public:
        void func(int &v){
            v = v * 3;
            calls++;
        }
        static int getCalls(){
            return calls;
        }
};
int B::calls = 0;

class C{
    static int calls;
    public:
        void func(int &v){
            v = v * 5;
            calls++;
        }
        static int getCalls(){
            return calls;
        }
};
int C::calls = 0;

class D{
    private:
        int val;
        A a; B b; C c;

    public:
        void update_val(int new_val)
        {
            val = 1;
            while (new_val % 2 == 0){
                a.func(val);
                new_val /= 2;
            }
            while (new_val % 3 == 0){
                b.func(val);
                new_val /= 3;
            }
            while (new_val % 5 == 0){
                c.func(val);
                new_val /= 5;
            }
        }
        int getVal(){
            return val;
        }
};

int main()
{
    D d;
    int new_val;
    cout << "Enter new_val (only prime factors 2, 3, 5): ";
    cin >> new_val;
    d.update_val(new_val);
    cout << "\nD's val = " << d.getVal() << endl;
    cout << "A's func called " << A::getCalls() << " times\n";
    cout << "B's func called " << B::getCalls() << " times\n";
    cout << "C's func called " << C::getCalls() << " times\n";
    return 0;
}