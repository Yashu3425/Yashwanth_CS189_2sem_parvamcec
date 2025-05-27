#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    int id;
    int weight;
    int roll_num;

    public:
    person(string name,int id,int weight): name(name), id(id), weight(weight)
    {
        cout<<"person constructor"<<endl;
        this->weight=weight;
    }
};
class employee:public person
{
    int roll_num;
    public:
    employee(string name,int id,int weight,int roll): person(name,id,weight), roll_num(roll)
    {
        cout<<"employee constructor"<<endl;
    }
    void display()
    {
        cout<<"employee details:"<<endl;
        cout<<"employee name:"<<name<<endl;
        cout<<"employee id:"<<id<<endl;
        cout<<"employeet weight:"<<weight<<endl;
        cout<<"employee roll_num:"<<roll_num<<endl;
    }
};
int main()
{
    employee e1("yashwanth",23,50,102);
    e1.display();
}