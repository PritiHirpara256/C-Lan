#include<iostream>
using namespace std;
class volume
{
    public:
    volume (int l)
    {
        cout<<"volume of cube: "<<l*l*l<<endl;
    } 
    volume (int l,int w,int h)
    {
        cout<<"volume of rectangular:"<<l*w*h<<endl;
    }
    volume (double r)
    {
         cout<<"volume of sphere:"<<((4/3)*3.14*r*r*r)<<endl;
    }
    volume (double b,double h)
    {
         cout<<"volume of pyramid:"<<0.33*b*h<<endl;
    }
    volume (double radius,int height)
    {
         cout<<"volume of cylinder:"<<0.33*radius*radius*height<<endl;
    }
};
int main() 
{
    volume a(2), b(2,5,6), c(6.2), d(5,2.3), e(4.3,3);
}