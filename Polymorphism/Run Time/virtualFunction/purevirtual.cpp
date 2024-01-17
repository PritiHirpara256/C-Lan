#include<iostream>
using namespace std;
class Base          //abstract class
{
   public:
   virtual void Hello() = 0;    //pure vitual fuction
};
class Derived : public Base
{
   public:
   void Hello()
   {
        cout<<"Derived class Hello function called"<<endl;
   } 
};
int main()
{
    Derived d;
    Base *p;
    p=&d;
    p->Hello();
}