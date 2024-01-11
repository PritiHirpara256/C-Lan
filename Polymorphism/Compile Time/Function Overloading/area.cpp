#include<iostream>
using namespace std;
class Test
{
    public:
    void Area(int r)
    {
        cout<<"area of circle:"<< 3.14 * r * r <<endl;
    }
    void Area(int l ,float w)
    {
        cout<<"area of rectangle:"<< l * w <<endl;
    }
    void Area(float b , int h)
    {
        cout<<"area of triangle:"<< (b * h) / 2 <<endl;
    }
    void Area(double s)
    {
        cout<<"area of square:"<< s * s <<endl;
    }
};
int main()
{
    Test t;
    t.Area(5);
    t.Area(5,4.3);
    t.Area(6.3,4);
    t.Area(3.2);
}