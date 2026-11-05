/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 24

#include<iostream>
using namespace std;
template<typename T>
class List{
    struct Node{
        T data;
        Node *next;
        Node(T d) : data(d), next(nullptr) {}
    };
    Node *head;
    int count;

public:
    List() : head(nullptr), count(0) {}
    ~List(){
        while (head){
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int size(){
        return count;
    }
    void insert(T value, int pos){
        if (pos < 0 || pos > count){
            cout << "Error: Position must be between 0 and " << count << ".\n";
            return;
        }
        Node *newNode = new Node(value);
        if (pos == 0){
            newNode->next = head;
            head = newNode;
        }else{
            Node *p = head;
            for (int i = 0; i < pos - 1; i++)
                p = p->next;
            newNode->next = p->next;
            p->next = newNode;
        }
        count++;
        cout << "Element " << value << " inserted at position " << pos << ".\n";
    }

    void deleteAt(int pos){
        if (count == 0){
            cout << "Error: The list is empty. Nothing to delete.\n";
            return;
        }if (pos < 0 || pos >= count){
            cout << "Error: Position must be between 0 and " << count - 1 << ".\n";
            return;
        }
        Node *target;
        if (pos == 0){
            target = head;
            head = head->next;
        }else{
            Node *p = head;
            for (int i = 0; i < pos - 1; i++)
                p = p->next;
            target = p->next;
            p->next = target->next;
        }
        cout << "Element " << target->data << " deleted from position " << pos << ".\n";
        delete target;
        count--;
    }

    void deleteValue(T value){
        if (count == 0){
            cout << "Error: The list is empty. Nothing to delete.\n";
            return;
        }
        Node *prev = nullptr;
        Node *cur = head;
        while (cur && !(cur->data == value)){
            prev = cur;
            cur = cur->next;
        }
        if (!cur){
            cout << "Element " << value << " was not found in the list.\n";
            return;
        }if (!prev)
            head = cur->next;
        else
            prev->next = cur->next;
        cout << "Element " << cur->data << " deleted successfully.\n";
        delete cur;
        count--;
    }

    void display(){
        if (!head){
            cout << "The list is empty.\n";
            return;
        }
        cout << "Current list (" << count << " element(s)): ";
        for (Node *p = head; p; p = p->next)
            cout << p->data << " ";
        cout << endl;
    }
};

template<typename T>
void runMenu(){
    List<T> list;
    int ch;
    do{
        cout << "\t\t\n===== MENU =====\n";
        cout << "1.Insert an elem |2.Delete an elem by pos |3.Delete an elem by value |4.Display list |0.Exit\nEnter choice (0-4): ";
        cin >> ch;
        if (ch == 1){
            T value;
            int pos;
            cout << "Enter the element to insert: ";
            cin >> value;
            cout << "Enter the position (0 = first, 1 = second, ...): ";
            cin >> pos;
            list.insert(value, pos);
        } else if (ch == 2){
            int pos;
            cout << "Enter the position of the element to delete (0 = first): ";
            cin >> pos;
            list.deleteAt(pos);
        } else if (ch == 3){
            T value;
            cout << "Enter the element to delete: ";
            cin >> value;
            list.deleteValue(value);
        } else if (ch == 4){
            list.display();
        } else if (ch == 0){
            cout << "Exiting!\n";
        } else{
            cout << "Invalid choice. Please enter a number from 0 to 4.\n";
        }
    } while (ch != 0);
}

int main(){
    int type;
    cout << "===== Select Data Type =====\n";
    cout << "1. int\n";
    cout << "2. float\n";
    cout << "3. char\n";
    cout << "Enter your choice (1-3): ";
    cin >> type;
    if (type == 1)
        runMenu<int>();
    else if (type == 2)
        runMenu<float>();
    else if (type == 3)
        runMenu<char>();
    else
        cout << "Invalid data type.Enter1, 2 or 3 only.\n";
    return 0;
}