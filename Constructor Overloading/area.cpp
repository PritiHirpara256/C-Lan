#include<iostream>
using namespace std;
class Area
{
    public:
    Area(int r)
    {
        cout<<"area of circle:"<< 3.14 * r * r <<endl;
    }
    Area(int l ,float w)
    {
        cout<<"area of rectangle:"<< l * w <<endl;
    }
    Area(float b , int h)
    {
        cout<<"area of triangle:"<< (b * h) / 2 <<endl;
    }
    Area(double s)
    {
        cout<<"area of square:"<< s * s <<endl;
    }
};
int main()
{
    Area a(5) , b(5,4.3) , c(6.3,4) , d(3.2);
}