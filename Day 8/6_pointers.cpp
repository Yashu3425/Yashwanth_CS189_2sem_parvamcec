/**
 *dynamic memeory:
 *==============
 *1. static (stack)
 *2. dynamic (heap)
 *
 *dynamic memeory:
 *==============
 *
 * 1. new->to allocate memeory
 * 2. 
 */
#include<iostream>
using namespace std;
class student
{
    string name;
    int roll_num;
};
int main()
{
    int a=10;
    student s1;

    // daynamic memeory
    // data_type *variable_name=new data_type

    int *a1=new int;
    *a1=20;
    cout<<"the value in a1: "<< *a1 << endl;

    //delete
    //delete pointer_name or variable_name
    delete a1;
    return 0;
}