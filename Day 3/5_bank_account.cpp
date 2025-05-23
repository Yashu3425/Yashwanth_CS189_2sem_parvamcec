#include<iostream>
using namespace std;
class BankAccount{
    public:
    string holder_name;
    int ac_no;
    BankAccount(){
        cout<<"default constructor"<<endl;
        this->holder_name="unknown";
        this->ac_no=0;
    }
    BankAccount(string name,int ac_no){
         cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->ac_no=ac_no;
    }
    BankAccount(BankAccount &b1)
    {
      this->holder_name=b1.holder_name;
      this->ac_no=b1.ac_no;   
    }
    void display(){
        cout<<"holder name:"<<this->holder_name<<endl;
        cout<<"account number:"<<this->ac_no<<endl;
    }
};
int main(){
    BankAccount b1("yashwanth",189);
    BankAccount b2 
    b1.display();
    
    return 0;
}
