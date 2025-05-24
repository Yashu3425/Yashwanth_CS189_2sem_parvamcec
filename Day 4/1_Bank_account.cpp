#include<iostream>
using namespace std;
class Bank{
    private:
    string holder_name;
    int acc_num;
    public:
    string getholder_Name()
    {
        return this->holder_name;
    }
    int getaccnum()
    {
        return this->acc_num;
    }
    void setName(string holder_name)
    {
        this->holder_name=holder_name;
    }
    void setaccnum(int acc)
    {
        this->acc_num=acc;
    }

};
int main(){
    Bank b1;
    b1.setName("yashwanth");
    b1.setaccnum(189);
    cout<<"holder_name is:"<<b1.getholder_Name()<<endl;
    cout<<"acc num is:"<<b1.getaccnum()<<endl;
    return 0;
}