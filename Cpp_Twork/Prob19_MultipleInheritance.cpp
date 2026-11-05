/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 19

#include<iostream>
using namespace std;

class Student{
    public:
        int age;
        char name[30];
        int enroll_no;
        float marks;
        void input(){
            cin >> name >> age >> enroll_no >> marks;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Enroll No: " << enroll_no << endl;
            cout << "Marks: " << marks << endl;
        }
};

class Faculty{
    public:
        char facultyName[30];
        int facultyCode;
        float salary;
        char deptt[30];
        int age;
        int experience;
        char gender[10];
        void input(){
            cin >> facultyName >> facultyCode >> salary >> deptt >> age >> experience >> gender;
        }
        void display(){
            cout << "Faculty Name: " << facultyName << endl;
            cout << "Faculty Code: " << facultyCode << endl;
            cout << "Salary: " << salary << endl;
            cout << "Department: " << deptt << endl;
            cout << "Age: " << age << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Gender: " << gender << endl;
        }
};

class Person : public Student, public Faculty
{
    public:
        void input(){
            Student::input();
            Faculty::input();
        }
        void display(){
            cout << "--- Student Information ---\n";
            Student::display();
            cout << "\n--- Faculty Information ---\n";
            Faculty::display();
        }
};

int main(){
    Person p;
    cout << "Enter student details (name,age,enroll_no,marks):\n";
    p.Student::input();
    cout << "Enter faculty details (name,code,salary,dept,age,experience,gender):\n";
    p.Faculty::input();
    cout << endl;
    p.display();
    cout << "\nStudent age: " << p.Student::age << endl;
    cout << "Faculty age: " << p.Faculty::age << endl;
    return 0;
}