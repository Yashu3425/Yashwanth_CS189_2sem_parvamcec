#include<iostream>
using namespace std;
class bus{
    public:
    string bus_name;
    int bus_no;
    bus(string name,int bus_no){
        cout<<"constructor is called automatically"<<endl;
        this->bus_name=name;
        this->bus_no=bus_no;
    }
    void display(){
        cout<<"bus name:"<<this->bus_name<<endl;
        cout<<"bus number:"<<this->bus_no<<endl;
    }
};
int main(){
    bus b1("yashwanth",109);
    b1.display();
    return 0;
}
