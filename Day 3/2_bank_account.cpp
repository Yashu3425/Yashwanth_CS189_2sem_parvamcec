#include<iostream>
using namespace std;

class BankAcount
{
     //data members / properties
 public:
     string holder_name;
     int ac_no;

     // constructor
     BankAcount()
     {
        cout<<"constructor is called automatically"<<endl;
     }
};
int main()
{
    BankAccount b1;
    b1.holder_name="yashwanth";
    b1.ac_no=101;
    cout<<"holder name:"<<b1.holder_name<<endl;
    cout<<"account number:"<<b1.ac_no<<endl;
    return 0;
}