#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void calculateArea()
    {
        cout<<"area not defined for generic shape:"<<endl;
    }
};
class circle:public shape
{
  private:
  double radius;
  public:
  circle(double r):radius(r){}
  void calculateArea() override
  {
    double res=3.14*radius*radius;
    cout<<"the area of the circle is"<<res<<endl;

  }
};
class Rectangle: public shape
{
  private:
  double length;
  double width;
  public:
  Rectangle(double l,double w ):length(l),width(w){}
  

  void calculateArea() override
  {
    double res=length*width;
    cout<<"the area of the Rectangle is"<<res<<endl;
  }
};
class Triangle:public shape
{
  private:
  double base;
  double height;
  public:
  Triangle(double b,double h):base(b),height(h){}
  void calculateArea() override
  {
    double res=base*height;
    cout<<"the area of the Triangle is"<<res<<endl;
  }
};
int main()
{
    circle c1(3.0);
    c1.calculateArea();
    Rectangle r1(6.0,8.0);
    r1.calculateArea();
    Triangle t1(4.5,4.9);
    t1.calculateArea();
    return 0;
}
