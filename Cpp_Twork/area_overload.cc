/*
    NAME                :SATYAM KUMAR
    CLASS ROLL NO.      :64
    SECTION             :DS 1
    UNIVERSITY ROLL NO. :2028488  
    */

// Problem 9

#include<iostream>
using namespace std;

float calculateArea(float side){
    return side * side;
}

float calculateArea(float length, float breadth){
    return length * breadth;
}

float calculateArea(float base, float height, bool isTriangle){
    return 0.5 * base * height;
}

int main()
{
    float side, length, breadth, base, height;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << calculateArea(side) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << calculateArea(length, breadth) << endl;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculateArea(base, height, true) << endl;
    return 0;
}