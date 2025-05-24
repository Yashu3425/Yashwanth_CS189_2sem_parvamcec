#include<iostream>
using namespace std;

class Bankaccount
{
    private:
    string holder_name;
    int acc_no;

    public:
    Bankaccount(string name)
    {
        this->holder_name=name;
        this->acc_no=acc_no;
        cout<<"constructor called for:"<<this->holder_name<<endl;
    }

    ~Bankaccount()
    {
        cout<<"destructor called for:"<<holder_name<<endl;
    }
};

int main()
{
    Bankaccount b1("yash");
    Bankaccount b2("dhaksh");
    Bankaccount b3("deepz");

    return 0;
}