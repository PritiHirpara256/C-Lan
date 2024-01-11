#include<iostream>
using namespace std;
class solid
{
    public:
    void volume (int l)
    {
        cout<<"volume of cube: "<<l*l*l<<endl;
    } 
    void volume (int l,int w,int h)
    {
        cout<<"volume of rectangular:"<<l*w*h<<endl;
    }
    void volume (double r)
    {
         cout<<"volume of sphere:"<<((4/3)*3.14*r*r*r)<<endl;
    }
    void volume (double b,double h)
    {
         cout<<"volume of pyramid:"<<0.33*b*h<<endl;
    }
    void volume (double radius,int height)
    {
         cout<<"volume of cylinder:"<<0.33*radius*radius*height<<endl;
    }
};
int main() 
{
    solid t;
    t.volume(2);
    t.volume(2,5,6);
    t.volume(10.1);
    t.volume(5,2.3);
    t.volume(4.3,3);
}