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
        cout<<"parameterized constructor is called.."<<endl;
        cout<<"value of a is:"<<a<<endl;
    }
};
int main()
{
    Test t(102);
}