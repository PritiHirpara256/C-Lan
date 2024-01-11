#include<iostream>
using namespace std;
class Test
{
    int l,b;
    public:
    void setdata(int x,int y)
    {
        l = x, b = y;
    }
    int getdata()
    {
        return l*b;
    }
    Test operator+(Test &n)
    {
        Test t;
        t.l = l + n.l;
        t.b = b + n.b;
        return t;
    }
    Test operator++(int)
    {
        Test t;
        t.l = ++l;
        t.b = ++b;
        return t;
    }
};
int main()
{
    Test a,b,c;
    a.setdata(2,5);
    cout<<"Box A area is:"<<a.getdata()<<endl;
    b.setdata(5,8);
    cout<<"Box B area is:"<<b.getdata()<<endl;
    c=a+b;
    cout<<"Box c area is:"<<c.getdata()<<endl;
    c++;
    //++c;
    cout<<"After increment Box c area is: "<<c.getdata()<<endl;
}