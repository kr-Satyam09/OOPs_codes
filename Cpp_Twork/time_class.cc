/*
NAME                :SATYAM KUMAR
CLASS ROLL NO.      :64
SECTION             :DS 1
UNIVERSITY ROLL NO. :2028488  
    */

// Problem 12

#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display(){
        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds << endl;
    }

    Time add(Time t)
    {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;
        if (result.seconds >= 60)
        {
            result.minutes += result.seconds / 60;
            result.seconds = result.seconds % 60;
        }if (result.minutes >= 60){
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }
        return result;
    }
};

int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter first time (hours minutes seconds): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter second time (hours minutes seconds): ";
    cin >> h2 >> m2 >> s2;
    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);
    cout << "\nFirst Time: ";
    time1.display();
    cout << "Second Time: ";
    time2.display();
    Time time3 = time1.add(time2);
    cout << "Sum of both times: ";
    time3.display();
    return 0;
}