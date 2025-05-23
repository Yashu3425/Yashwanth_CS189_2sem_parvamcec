/** 
 *user defined functions
 *4 types
 *======
 *1.function accepting parameter but not return value
 *2.function accepting parameter and return a value.
 *3.function not accepting the parameter and return a value.
 *4.function not accepting parameter and not return a value.
*/

#include<iostream>
using namespace std;
// function decleration/prototype
int add(int num1,int num2);  //type2
void sub(int num1,int num2); //type1
int mul();                   //type3
void div();                  //type4
int main()
{
    // function call
    int a=0,b=0;
    cout<<"enter two number:"<<endl; //4 2
    cin>>a>>b;
    int res=add(a,b);
    cout<<"type2:"<<res<<endl; //6
    sub(a,b);                  //2
    int res1 = mul();
    cout<<"the mul is:"<<res<<endl; //100
    div();                          //5
}
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
void sub(int num1,int num2)
{
    cout<<"the sub is:"<<num1-num2;
}
int mul()
{
    int a=10;
    int b=10;
    return a*b;
}
void div()
{
    int a=10;
    int b=2;
    cout<<"the div result is:"<<a/b<<endl;
}