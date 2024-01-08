#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<<"Default constructor is called.."<<endl;
    }
    Test(int a)
    {
        cout<<"square of a is :"<< a * a <<endl;
    }   
    Test(int a,int b)
    {
        cout<<"Product of a and b is: "<< a * b <<endl;
    }
    Test(int a,int b,int c)
    {
        cout<<"addition of a,b and c is: "<< a + b + c<<endl;
    }
    Test(char a)
    {
        cout<<"Character is: "<< a <<endl;
    }
};
int main()
{
    Test a,b(10),c(10,20),d(10,20,30),e('b');
}