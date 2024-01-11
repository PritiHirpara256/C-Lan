#include<iostream>
using namespace std;
class Test
{
    public:
    void hello()
    {
        cout<<"Hello world"<<endl;
    }
    void hello(int a)
    {
        cout<<"square of a is:"<< a * a <<endl;
    }
    void hello(int a,int b)
    {
        cout<<"product of a and b is:"<< a * b <<endl;
    }
    void hello(int a,int b,int c)
    {
        cout<<"product of a , b and c is:"<< a + b + c <<endl;
    }
};
int main()
{
    Test t;
    t.hello();
    t.hello(10);
    t.hello(10,20);
    t.hello(10,20,30);
}