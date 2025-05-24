#include<iostream>
using namespace std;

class student
{
    private:
    string name;

    public:
    student(string name)
    {
        this->name=name;
        cout<<"constructor called for:"<<this->name<<endl;
    }

    ~student()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};

int main()
{
    student s1("yash");
    student s2("dhaksh");
    student s3("deepz");

    return 0;
}