/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 10

#include<iostream>
using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice(string pNum, string pDesc, int qty, double price){
        partNumber = pNum;
        partDescription = pDesc;
        quantity = qty;
        price_per_item = price;
    }

    void setPartNumber(string pNum){
        partNumber = pNum;
    }

    string getPartNumber(){
        return partNumber;
    }

    void setPartDescription(string pDesc){
        partDescription = pDesc;
    }

    string getPartDescription(){
        return partDescription;
    }

    void setQuantity(int qty){
        quantity = qty;
    }

    int getQuantity(){
        return quantity;
    }

    void setPrice(double price){
        price_per_item = price;
    }

    double getPrice(){
        return price_per_item;
    }

    double getInvoiceAmount(){
        // validate quantity and price before calculation
        if (quantity <= 0)
            quantity = 0;
        if (price_per_item <= 0)
            price_per_item = 0.0;
        return quantity * price_per_item;
    }
};

int main()
{
    string pNum, pDesc;
    int qty;
    double price;
    cout << "Enter part number: ";
    cin >> pNum;
    cout << "Enter part description: ";
    cin.ignore();
    getline(cin, pDesc);
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> price;
    Invoice inv(pNum, pDesc, qty, price);
    cout << "\n\t\t Invoice Details\n";
    cout << "Part Number: " << inv.getPartNumber() << endl;
    cout << "Description: " << inv.getPartDescription() << endl;
    cout << "Quantity: " << inv.getQuantity() << endl;
    cout << "Price per Item: " << inv.getPrice() << endl;
    cout << "Invoice Amount: Rs " << inv.getInvoiceAmount() << endl;
    return 0;
}