/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 21

#include<iostream>
using namespace std;

class Shape{
    protected:
        double dim1, dim2;

    public:
        void get_data(){
            cin >> dim1 >> dim2;
        }

        virtual void display_area(){
            cout << "Area: " << dim1 * dim2 << endl;
        }
        virtual ~Shape() {}
};

class Triangle : public Shape{
    public:
        void display_area(){
            cout << "Area of triangle: " << 0.5 * dim1 * dim2 << endl;
        }
};

class Rectangle : public Shape{
    public:
        void display_area(){
            cout << "Area of rectangle: " << dim1 * dim2 << endl;
        }
};

int main(){
    int choice;
    cout << "Enter 1.Triangle |2.Rectangle: ";
    cin >> choice;
    Shape *s;
    if (choice == 1){
        s = new Triangle();
        cout << "Enter base and height of triangle:\n";
    }else if (choice == 2){
        s = new Rectangle();
        cout << "Enter length and breadth of rectangle:\n";
    }else{
        cout << "Invalid choice\n";
        return 0;
    }
    s->get_data();
    s->display_area();
    delete s;
    return 0;
}