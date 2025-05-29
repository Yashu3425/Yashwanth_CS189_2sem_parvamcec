#include<iostream>
using namespace std;

int main()
{
    int a=10;
    // reference variable that is pointing to a
    int &r=a;
    r=r+10;
    cout<<"value of a:"<<a<<endl;// 20
}