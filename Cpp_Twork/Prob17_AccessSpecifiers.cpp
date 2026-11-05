/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 17

#include<iostream>
using namespace std;

class Base{
    private:
        int privateData;

    protected:
        int protectedData;

    public:
        int publicData;
        void readData(){
            cin >> privateData >> protectedData >> publicData;
        }
        void showOwnMembers(){
            cout << "Private: " << privateData << endl;
            cout << "Protected: " << protectedData << endl;
            cout << "Public: " << publicData << endl;
        }
};

class DerivedPublic : public Base{
    public:
        void run(){
            readData();
            cout << "\nPublic inheritance - accessible members:\n";
            cout << "Protected: " << protectedData << endl;
            cout << "Public: " << publicData << endl;
        }
};

class DerivedProtected : protected Base{
    public:
        void run(){
            readData();
            cout << "\nProtected inheritance - accessible members:\n";
            cout << "Protected: " << protectedData << endl;
            cout << "Public: " << publicData << endl;
        }
};

class DerivedPrivate : private Base{
    public:
        void run(){
            readData();
            cout << "\nPrivate inheritance - accessible members:\n";
            cout << "Protected: " << protectedData << endl;
            cout << "Public: " << publicData << endl;
        }
};

int main(){
    DerivedPublic dPublic;
    DerivedProtected dProtected;
    DerivedPrivate dPrivate;
    cout << "Enter private, protected and public values for public derived class: ";
    dPublic.run();
    cout << "\nEnter private, protected and public values for protected derived class: ";
    dProtected.run();
    cout << "\nEnter private, protected and public values for private derived class: ";
    dPrivate.run();
    return 0;
}