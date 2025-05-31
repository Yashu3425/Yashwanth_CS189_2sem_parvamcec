#include <iostream>
#include<fstream>
using namespace std;

class Student
{
private:
    string name;
    int roll_num;

public:
    void input()
    {
        cout << "Enter student name: " << endl;
        cin >> name;
        cout << "Enter student roll_num: " << endl;
        cin >> roll_num;
    }
    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Student roll_num: " << roll_num << endl;
    }
};
int main()
{
    double a=10;
    cout<<"size of a:"<<sizeof(a)<<endl;
    ;
    Student s1;

    ofstream fout("student.dat",ios::binary);
    s1.input();
    fout.write((char *)&s1,sizeof(s1));
    fout.close();

    Student s2;
    ifstream fin("students.dat",ios::binary);
    fin.read((char *)&s2,sizeof(s2));
    s2.display();
   return 0;
}