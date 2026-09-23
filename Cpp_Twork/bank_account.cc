/*
    NAME                :SATYAM KUMAR
    CLASS ROLL NO.      :64
    SECTION             :DS 1
    UNIVERSITY ROLL NO. :2028488  
    */

// Problem 7

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;   
    string accountType;
    float balance;          
public:
 
    void assignValues(string name, int accNum, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw() {
        float amount;
        cout << "Enter withdrawl amount: ";
        cin >> amount;
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }

        if (balance >= amount) {
            balance -= amount;
            cout << "Successfully withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance! Cannot withdraw " << amount << endl;
        }
    }

    void display() const {
        cout << "Depositor Name : " << depositorName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Type   : " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.assignValues("Rahul Sharma", 1001, "Savings", 5000.50f);
    myAccount.display();
    myAccount.deposit();
    myAccount.withdraw();
    myAccount.withdraw();
    myAccount.display();
    return 0;
}