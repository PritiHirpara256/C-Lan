#include<iostream>
using namespace std;
class Test
{
    public:
    static int a;
    void dispaly()
    {
        cout<<"Display function called"<<endl;
        ++a;
    }
    static int getA()
    {
        return  a;
    }
};
int Test ::a = 50;
int main()
{
    //cout<<"Before object value of a is:"<<Test::a<<endl;
    cout<<"Before object value of a is:"<<Test::getA()<<endl;
    Test t,a,b,c;
    t.dispaly();
    a.dispaly();
    b.dispaly();
    cout<<"Before object value of a is:"<<Test::getA()<<endl;
    //cout<<"Before object value of a is:"<<Test::a<<endl;
}