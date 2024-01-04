#include<iostream>
using namespace std;
class Test
{
    public:
    ~Test()
    {
        cout<<"destructor is called.."<<endl;
    }
   
};
int main()
{
    Test t(),aa;
}