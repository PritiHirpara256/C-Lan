#include<iostream>
using namespace std;
class Base
{
   public:
   virtual void Hello()
   {
    cout<<"Base class Hello function called"<<endl;
   } 
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
    Base *p,b;
    p=&d;
    p->Hello();

     p=&b;
    p->Hello();
}