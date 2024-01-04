#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs;
    char name[20];
    float batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode:"<<bcode<<endl;
        cin>>bcode;
         cout<<"Enter name:"<<endl;
        cin>>name;
         cout<<"Enter innings:"<<endl;
        cin>>innings;
         cout<<"Enter notout:"<<endl;
        cin>>notout;
        cout<<"Enter runs:"<<endl;
        cin>>runs;
        calcavg();
    }
    void display()
    {
        cout<<"your bcode:"<<bcode<<endl;
         cout<<"your name:"<<name<<endl;
         cout<<"your innings:"<<innings<<endl;
         cout<<"notout match:"<<notout<<endl;
         cout<<"your runs:"<<runs<<endl;
         cout<<"your average:"<<batavg<<endl;
    }

};
int main()
{
    batsman t;
    t.readdata();
    t.display();
}