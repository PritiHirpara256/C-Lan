#include<iostream>
using namespace std;
class Rect
{
    int l,b;
    friend Rect sum(Rect x,Rect y);
    public:
    void setdata(int x,int y)
    {
        l = x,b = y;
    }
    int getdata()
    {
        return l*b;
    }
};
Rect sum(Rect x,Rect y)
{
    Rect t;
    t.l = x.l + y.l;
    t.b = x.b + y.b;
    return t;
}
int main()
{
    Rect a,b,c;
    a.setdata(5,10);
    cout<<"Area Of Rect A Is :- "<<a.getdata()<<endl;
    b.setdata(7,6);
    cout<<"Area Of Rect B Is :- "<<b.getdata()<<endl;
    c = sum(a,b);
    cout<<"Area Of Rect C Is :- "<<c.getdata()<<endl;
} 