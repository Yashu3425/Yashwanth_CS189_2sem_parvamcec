#include<iostream>
using namespace std;
// pointer to function
void change(int *p1)
{
    *p1=*p1+90;
}
int main()
{
    //variable
    int a=10;
    int*ptr=&a;
    change(ptr);
    cout<<"value of a:"<<a<<endl; //100
    return 0;
}