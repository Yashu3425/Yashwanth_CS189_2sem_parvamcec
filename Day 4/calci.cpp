#include<iostream>
using namespace std;
class cal{
    int a,b;
    int c;
    public:
    int input(){
        cout<<"enter your choice="<<endl;
        cout<<"1.add,2.sub,3.multiply,4.divide,5.modulus,6.exit"<<endl;
        cin>>c;
        cout<<"enter the two numbers"<<endl;
        cin>>a;
        cin>>b;
        return 0;
    }
    void add(){ 
        int res=a+b;
        cout<<"sum is"<<res<<endl;
    }
     void sub(){
        int res=a-b;
        cout<<"difference is"<<res<<endl;
    }
     void mul(){
        int res=a*b;
        cout<<"product is"<<res<<endl;
    }
     void div(){
        int res=a/b;
        cout<<"quotient is"<<res<<endl;
    }
     void mod(){
        int res=a%b;
        cout<<"remainder is"<<res<<endl;
    }
     void exit(){
        cout<<"you have exited is"<<endl;
    }
    int display(){
        switch(c)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;  
        case 5:
            mod();
            break;
        case 6:
            exit();
            break;
        default:
             cout<<"invaild choice"<<endl;
             break;                      
        }
    }
};
int main(){
    cal c1;
    c1.input();
    c1.display();
}