/*
    NAME                :SATYAM KUMAR
    CLASS ROLL NO.      :64
    SECTION             :DS 1
    UNIVERSITY ROLL NO. :2028488  
    */

// Problem 6

# include <iostream>
# include <string>
using namespace std;

class Hotel{
    private:
        int Rno, NOD; // Rno is: Room number & NOD is: Number of Days
        string name;
        float tarrif;
        float calc(){
            float amount = NOD * tarrif;
            if(amount > 10000){
                amount = 1.05 * amount; // 5% additional charge applied.
            }
            return amount;
        }

    public:
        void Checkin(){
            cout << "Enter room number: ";
            cin >> Rno;
            cin.ignore();
            cout << "Enter Customer Name: ";
            getline(cin,name);
            cout << "Enter tarrif per day: ";
            cin >> tarrif;
            cout << "Enter number of days of stay: ";
            cin >> NOD;

        }

        void Checkout(){
            cout << "\n";
            cout << "Room number: " << Rno << endl;
            cout << "Customer Name: " << name << endl;
            cout << "Tarrif per day: " << tarrif << endl;
            cout << "Number of days of stay: " << NOD << endl;
            cout << "Total amount due: Rs " << calc() << endl;
        }
    };

int main(){
    Hotel guest;
    guest.Checkin();
    guest.Checkout();
    return 0;
}    

