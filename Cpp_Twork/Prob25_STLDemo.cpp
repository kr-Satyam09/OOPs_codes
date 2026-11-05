/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488
    */

// Problem 25

#include<iostream>
#include<list>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n, x, pos, key;
    string name;
    cout << "===== LIST DEMO =====\n";
    cout << "Enter number of elements in list: ";
    cin >> n;
    list<int> L;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> x;
        L.push_back(x);
    }
    cout << "Enter an element to push at front: ";
    cin >> x;
    L.push_front(x);
    cout << "Enter an element to push at back: ";
    cin >> x;
    L.push_back(x);
    cout << "Enter an element to remove (by value): ";
    cin >> x;
    L.remove(x);
    L.sort();
    cout << "List after push_front, push_back, remove and sort: ";
    for (auto it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    cout << "\nSize: " << L.size();
    cout << "\nFront: " << L.front() << ", Back: " << L.back() << endl;
    L.reverse();
    cout << "List after reverse: ";
    for (auto it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "\n===== VECTOR DEMO =====\n";
    cout << "Enter number of elements in vector: ";
    cin >> n;
    vector<int> V;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> x;
        V.push_back(x);
    }
    cout << "Enter position to insert at (0 = first): ";
    cin >> pos;
    cout << "Enter element to insert: ";
    cin >> x;
    V.insert(V.begin() + pos, x);
    cout << "Enter position to erase (0 = first): ";
    cin >> pos;
    V.erase(V.begin() + pos);
    V.pop_back();
    cout << "Vector after insert, erase and pop_back: ";
    for (int i = 0; i < V.size(); i++)
        cout << V[i] << " ";
    cout << "\nSize: " << V.size();
    cout << "\nFront: " << V.front() << ", Back: " << V.back() << endl;
    cout << "Enter index to read using at(): ";
    cin >> pos;
    cout << "Element at index " << pos << ": " << V.at(pos) << endl;

    cout << "\n===== MAP DEMO =====\n";
    cout << "Enter number of students: ";
    cin >> n;
    map<int, string> M;
    for (int i = 0; i < n; i++){
        cout << "Enter roll number and name: ";
        cin >> key >> name;
        M.insert({key, name});
    }
    cout << "Enter roll number to search: ";
    cin >> key;
    auto found = M.find(key);
    if (found != M.end())
        cout << "Found: " << found->second << endl;
    else
        cout << "Roll number " << key << " not found\n";
    cout << "Enter roll number to erase: ";
    cin >> key;
    if (M.erase(key))
        cout << "Roll number " << key << " removed\n";
    else
        cout << "Roll number " << key << " not found, nothing removed\n";
    cout << "Map contents (sorted by roll number):\n";
    for (auto &p : M)
        cout << p.first << " -> " << p.second << endl;
    cout << "Size: " << M.size() << endl;
    return 0;
}