#include<iostream>
using namespace std;
class Fact
{
    public:
    int setA(int n)
    {
        if(n == 1)
        {
            return 1;
        }
        else
        {
            return n*setA(n-1);
        }
    }
};
class Derived : public Fact
{
    protected:
    int t;
    public:
    void fact()
    {
        int t=setA(5);
        cout<<"Factorial Number Is :- "<<t;
    }
};
int main()
{
    Derived d;
    d.fact();
    d.setA(0);
}