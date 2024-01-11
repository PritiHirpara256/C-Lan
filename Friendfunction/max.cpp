#include<iostream>
using namespace std;
class Max 
{
    int x, y;
    public:
    void getdata()
    {
       cout << "Enter first numbers:";
       cin >> x;
       cout << "Enter second numbers:";
       cin >>y;
    }
    friend void find(Max t);
};
void find(Max t) 
{
    if (t.x > t.y) 
    {
      cout << "Maximum number is:" << t.x;
    }
    else
    {
       cout << "Maximum number is:" << t.y;
    }
}
int main()
{
    Max t;
    t.getdata();
    find(t);
}