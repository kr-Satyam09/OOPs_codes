/*
    Q1) WAC++P to assign a data to member of structure variable and display it.
    */

#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s;
    cout << "Roll no: ";
    cin >> s.rollNo;
    cout << "Name: ";
    cin >> s.name;
    cout << "Marks: ";
    cin >> s.marks;
    cout << endl;
    
    // Displaying data
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}