#include<iostream>
using namespace std;
class Test{
    int a=101;
    public:
    void hello()
    {
        cout<<"hello world"<<endl;
        cout<<"value of a is:"<<a<<endl;
    }
};
int main()
{
    Test t;
    t.hello();
}