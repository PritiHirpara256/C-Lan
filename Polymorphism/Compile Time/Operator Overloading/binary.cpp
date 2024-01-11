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
};
int main()
{
    Test a,b,c;
    a.setdata(6,5);
    cout<<"Box A area is:"<<a.getdata()<<endl;
    b.setdata(9,8);
    cout<<"Box B area is:"<<b.getdata()<<endl;
    c=a+b;  // 15  13
    cout<<"Box c area is:"<<c.getdata()<<endl;
}