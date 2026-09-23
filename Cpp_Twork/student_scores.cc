/*
    NAME                :SATYAM KUMAR
    CLASS ROLL NO.      :64
    SECTION             :DS 1
    UNIVERSITY ROLL NO. :2028488  
    */

// Problem 8

# include <iostream>
using namespace std;

class Student{
    private:
        int score[20];
    
    public:
        void input(){
            int i;
            for(i = 0;i < 5;i++){
                cin >> score[i];
            }
        }
        int calTotal_score(){
            int total = 0, i;
            for(i = 0;i < 5; i++){
                total+=score[i];
            }
            return total;
        }
};

int main(){
    int n, count = 0, i;
    cout <<"Enter total number of students:";
    cin >> n;
    cout <<"Enter 5 scores of Anna(Student 1):\n";
    Student anna;
    anna.input();
    int anna_score = anna.calTotal_score();
    for(i = 1;i < n; i++){
        cout <<"Enter 5 scores for Student " <<(i+1) <<":\n";
        Student s;
        s.input();
        int total_score = s.calTotal_score();
        if(total_score > anna_score){
            count++;
        }
    }cout <<"Number of students who scored higher than Anna: " <<count << endl;
    return 0;
}
