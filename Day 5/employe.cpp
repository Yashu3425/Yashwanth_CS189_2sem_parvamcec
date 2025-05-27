#include<iostream>
using namespace std;
class employe{
    private:
    string emp_name;
    int work_hour;
    public:
    employe(string name, int work): emp_name(name), work_hour(work)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"emp_name:"<<emp_name<<endl;
        cout<<"work hour:"<<work_hour<<endl;
    }
};
int main()
{
    employe e1("yashwanth",189);
    e1.display();
}
