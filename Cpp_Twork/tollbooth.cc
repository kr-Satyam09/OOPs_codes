/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 11

#include<iostream>
#include<conio.h>
using namespace std;

class TollBooth
{
private:
    unsigned int totalCars;
    double totalMoney;

public:
    TollBooth(){
        totalCars = 0;
        totalMoney = 0.0;
    }

    void payingCar(){
        totalCars++;
        totalMoney += 0.5;
    }

    void nonPayCar(){
        totalCars++;
    }

    void display(){
        cout << "\n--- Tollbooth Summary ---\n";
        cout << "Total cars: " << totalCars << endl;
        cout << "Total money collected: Rs " << totalMoney << endl;
    }
};

int main()
{
    TollBooth booth;
    char choice;
    cout << "Press 'p' for paying car\n";
    cout << "Press 'n' for non-paying car\n";
    cout << "Press 'ESC' to exit\n\n";
    while (true)
    {
        cout << "Enter choice: ";
        choice = getch();
        if (choice == 27){    // ESC key
            booth.display();
            cout << "\nExiting...\n";
            break;
        }else if (choice == 'p' || choice == 'P'){
            booth.payingCar();
            cout << "Paying car recorded\n";
        }else if (choice == 'n' || choice == 'N'){
            booth.nonPayCar();
            cout << "Non-paying car recorded\n";
        }else{
            cout << "Invalid input. Try again.\n";
        }
    }return 0;
}