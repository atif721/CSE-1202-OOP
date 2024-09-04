#include<iostream>
using namespace std;

int main() {


    return 0;
}
//problem5
#include<iostream>
using namespace std;

class Student {
private:
    string name,Class;
    int roll_number,marks;
    string latter_grade;
public:
    void userinput() {
        cout << "Student name:" ;
        cin >> name ;
        cout << "Student Class:" ;
        cin >> Class ;
        cout << "Student Roll Number:" ;
        cin >> roll_number ;
        cout << "Student Exam marks:" ;
        cin >> marks ;
    }

    void grade() {
        if(marks >= 80 && marks < 100)
            latter_grade="A+" ;
        else if(marks >= 75 && marks < 79)
            latter_grade="A";
        else if(marks >= 70 && marks < 74)
            latter_grade="A-" ;
        else if(marks >= 65 && marks < 69)
            latter_grade="B+" ;
        else if(marks >= 60 && marks < 64)
            latter_grade="B" ;
        else if(marks >= 55 && marks < 59)
            latter_grade="B-" ;
        else if(marks >= 50 && marks < 54)
            latter_grade="C+" ;
        else if(marks >= 45 && marks < 49)
            latter_grade="C" ;
        else if(marks >= 40 && marks < 44)
            latter_grade="D" ;
        else
            latter_grade="F" ;
    }

    void display() {
        system("cls");
        cout << "Student name:" << name << endl;
        cout << "Student Class:" << Class << endl;
        cout << "Student Roll Number:" << roll_number << endl;
        cout << "Student Exam marks:" << marks << endl;
        cout << "Student Grade:" << latter_grade << endl;
    }

};
int main () {
    Student S1;
    S1.userinput();
    S1.grade();
    S1.display();

    return 0;
}
