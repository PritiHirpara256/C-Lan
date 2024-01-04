#include<iostream>
using namespace std;
class report
{
    int adno,marks[5],average=0,i;
    char name[20];
    int getavg()
    {
        for (int i=0;i<5;i++)
        {
            average+=marks[i];
        }
        average/=5;
    }
    public:
    int readinfo()
    {
        cout<<"Enter addmission no:"<<endl;
        cin>>adno;
        cout<<"Enter name:"<<endl;
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<"Enter marks:"<<endl;
            cin>>marks[i];
        }
        getavg();
    }
    int displayinfo()
    {
        cout<<"addmission no:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        for(i=0;i<5;i++)
        {
        cout<<"marks:"<<marks[i]<<endl;
        }
        cout<<"Average:"<<average<<endl;
    }
};
int main()
{
    report t;
    t.readinfo();
    t.displayinfo();
}