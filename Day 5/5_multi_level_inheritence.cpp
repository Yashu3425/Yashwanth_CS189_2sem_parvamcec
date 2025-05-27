#include<iostream>
using namespace std;

class camera
{
    int resolution;
    public:
    camera(int res):resolution(res)
    {
        cout<<"camera constructor"<<endl;
    }
    void display_camera()
    {
        cout<<"camera resolution:"<<resolution<<endl;
    }
};
class phone
{
    double phone_number;
    public:
    phone(double p_num):phone_number(p_num)
    {
        cout<<"phone constructor"<<endl;
    }
    void dis_phone()
    {
        cout<<"phone number:"<<phone_number<<endl;
    }
};
class smartphone:public phone,public camera
{
    int network_speed;
    public:
    smartphone(int res,double p_num,int network):phone(p_num),camera(res),network_speed(network)
    {
        cout<<"smartphone constructor"<<endl;
    }
    void dis_smart_phone()
    {
        cout<<"smart phone details:"<<endl;
        display_camera();
        dis_phone();
        cout<<"network speed:"<<network_speed<<endl;
    }
};
int main()
{
    smartphone s1(108,1111111111,30);
    s1.dis_smart_phone();
    return 0;
}
