/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 22

#include<iostream>
using namespace std;

const float PI = 3.14159265f;

class CAL_AREA{
    protected:
        float radius, height;

    public:
        virtual void getdata(){
            cin >> radius >> height;
        }
        virtual void display_volume() = 0;
        virtual ~CAL_AREA() {}
};

class Cone : public CAL_AREA{
    public:
        void display_volume(){
            cout << "Volume of cone: " << (1.0f / 3) * PI * radius * radius * height << endl;
        }
};

class Hemisphere : public CAL_AREA{
    public:
        void getdata(){
            cin >> radius;
        }
        void display_volume(){
            cout << "Volume of hemisphere: " << (2.0f / 3) * PI * radius * radius * radius << endl;
        }
};

class Cylinder : public CAL_AREA{
    public:
        void display_volume(){
            cout << "Volume of cylinder: " << PI * radius * radius * height << endl;
        }
};

int main(){
    int choice;
    cout << "Enter 1.Cone |2.Hemisphere |3.Cylinder: ";
    cin >> choice;
    CAL_AREA *figure;
    if (choice == 1){
        figure = new Cone();
        cout << "Enter radius and height of cone:\n";
    }else if (choice == 2){
        figure = new Hemisphere();
        cout << "Enter radius of hemisphere:\n";
    }else if (choice == 3){
        figure = new Cylinder();
        cout << "Enter radius and height of cylinder:\n";
    }else{
        cout << "Invalid choice\n";
        return 0;
    }
    figure->getdata();
    figure->display_volume();
    delete figure;
    return 0;
}