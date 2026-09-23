/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 13

#include<iostream>
using namespace std;

class SavingsAccount
{
private:
    double savingsBalance;
    static double annualInterestRate;

public:
    SavingsAccount(double balance){
        savingsBalance = balance;
    }

    void calculateMonthlyInterest(){
        double monthlyInterest = savingsBalance * annualInterestRate / 12;
        savingsBalance = savingsBalance + monthlyInterest;
    }

    static void modifyInterestRate(double newRate){
        annualInterestRate = newRate;
    }

    void display(){
        cout << "Balance: Rs " << savingsBalance << endl;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    cout << "Initial Balances:\n";
    cout << "Saver 1: ";
    saver1.display();
    cout << "Saver 2: ";
    saver2.display();
    cout << "\nSetting annual interest rate to 4%\n";
    SavingsAccount::modifyInterestRate(0.04);
    cout << "After 1st month's interest:\n";
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1: ";
    saver1.display();
    cout << "Saver 2: ";
    saver2.display();
    cout << "\nSetting annual interest rate to 5%\n";
    SavingsAccount::modifyInterestRate(0.05);
    cout << "After 2nd month's interest:\n";
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1: ";
    saver1.display();
    cout << "Saver 2: ";
    saver2.display();
    return 0;
}