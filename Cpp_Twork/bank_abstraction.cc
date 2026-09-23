/*
    NAME                :SATYAM KUMAR
    CLASS ROLL NO.      :64
    SECTION             :DS 1
    UNIVERSITY ROLL NO. :2028488  
    */

// Problem 5

# include <iostream>
using namespace std;

class BankAccount{
    private:
        float balance = 0.0;
    public:
        void deposit(){
            float amount;
            cout << "Enter amount to deposit:";
            cin >> amount;

            if(amount >= 0){
                balance += amount;
                cout << "Deposited amount is Rs " << amount << endl;
            }
            else{
                cout << "Please enter a valid amount to deposit!";
            }
        }
        void displaybal(){
            cout << "Current balance is Rs " << balance << endl;
        }
};

int main(){
    BankAccount myAc;
    myAc.deposit();
    myAc.displaybal();
    return 0;

}