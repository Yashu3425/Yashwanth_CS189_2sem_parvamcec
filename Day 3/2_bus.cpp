#include<iostream>
using namespace std;

class bus
{
    // data members / properties
    public:
    string bus_route;
    int bus_no;
};
int main()
{
    bus b1;
    b1.bus_route="chandpura";
    b1.bus_no=600;
    cout<<"bus name:"<<b1.bus_route<<endl;
    cout<<"bus number:"<<b1.bus_no<<endl;
    return 0;
}
