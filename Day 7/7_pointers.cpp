#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p1=&a;
    // pointer to pointer
    int **p2=&p1;
    // pointer to pointer to pointer
    int ***p3=&p2;

    cout<<"value of a:"<<a<<endl;
    cout<<"value of a:"<<*(&a)<<endl;
    cout<<"value of a:"<<**p2<<endl;
    cout<<"value of a:"<<*p1<<endl;
    cout<<"value of a:"<<**&p1<<endl;
    cout<<"value of a:"<<***(&p2)<<endl;
    cout<<"value of a:"<<*(&(**p2))<<endl;
}
