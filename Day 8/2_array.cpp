#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"enter the value of an array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"enter the"<< i + 1<<"element:"<<endl;  
        cin>>arr[i];  
    }
    cout<<"array element:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"element is:"<<arr[i]<<endl;
    }
    return 0;
}