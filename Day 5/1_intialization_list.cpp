#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_num;
    public:
    student(string name, int roll): name(name), roll_num(roll)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll_num:"<<roll_num<<endl;
    }
};
int main()
{
    student s1("yashwanth",189);
    s1.display();
}
