#include<iostream>
using namespace std;

int main()
{
    int arr[8]={1,2,13,5,6,17,8};
    int*ptr=arr;
    int evenCount=0,oddCount=0;
    for(int i=0; i<7; i++)
    {
        if((i[ptr]%2)==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"even cout:"<<evenCount<<endl;
    cout<<"odd cout:"<<oddCount<<endl;
}