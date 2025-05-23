#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_num;
    string class_name;
    float marks;

public:
    // Constructor
    Student(string n, int r, string c, float m) {
        name = n;
        roll_num = r;
        class_name = c;
        marks = m;
    }

    // Display method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_num << endl;
        cout << "Class Name: " << class_name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << getGrade() << endl;
    }

public:
    // Grade calculation
    string getGrade() {
        if (marks > 90 && marks <= 100) return "A+";
        else if (marks > 80 && marks <= 90) return "A";
        else if (marks > 70 && marks <= 80) return "B+";
        else if (marks > 60 && marks <= 70) return "B";
        else if (marks > 50 && marks <= 60) return "C+";
        else if (marks > 40 && marks <= 50) return "C";
        else return "F";
    }
};

int main() {
    // Example usage
    Student s1("Yashwanth G", 101, "12th Grade", 95.5);
    s1.display();
    return 0;
}
