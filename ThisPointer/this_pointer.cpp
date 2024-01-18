#include<iostream>
using namespace std;
class Test
{
    int bal;
    string name;
    public:
    void setdata(int bal,string name)
    {
        this->bal=bal;
        this->name=name;
    }
    void getdata()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Balance is: "<<bal<<endl;
    }
};
int main()
{
    Test t;
    t.setdata(1010,"Hello");
    t.getdata();
}