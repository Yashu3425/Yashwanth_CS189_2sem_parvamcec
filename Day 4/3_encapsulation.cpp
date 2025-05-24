#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_num;
    public:
    string getName()
    {
        return this->name;
    }
    int getRollnum()
    {
        return this->roll_num;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setRollnum(int roll)
    {
        this->roll_num=roll;
    }

};
int main(){
    student s1;
    s1.setName("yashwanth");
    s1.setRollnum(189);
    cout<<"name is:"<<s1.getName()<<endl;
    cout<<"Roll num is:"<<s1.getRollnum()<<endl;
    return 0;
}