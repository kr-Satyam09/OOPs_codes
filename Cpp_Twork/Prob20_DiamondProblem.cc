/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 20

#include<iostream>
using namespace std;

class Person{
    public:
        char name[30];

        void showName(){
            cout << "Name: " << name << endl;
        }
};

class Student : virtual public Person{
    public:
        int enrollNo;
};

class Faculty : virtual public Person{
    public:
        int facultyCode;
};

class TeachingAssistant : public Student, public Faculty{
    public:
        void input(){
            cin >> name >> enrollNo >> facultyCode;
        }

        void display(){
            showName();
            cout << "Enroll No: " << enrollNo << endl;
            cout << "Faculty Code: " << facultyCode << endl;
        }
};

int main(){
    TeachingAssistant ta;
    cout << "Enter TA name, enroll number and faculty code:\n";
    ta.input();
    cout << endl;
    ta.display();
    return 0;
}