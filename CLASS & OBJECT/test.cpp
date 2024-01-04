#include<iostream>
using namespace std;
class Test
{
    int testcode,nocandidate,CenterReqd;
    string description;
    int calcltr()
    {
         return (nocandidate/100+1);
     
    }
    public:
    int schedule()
    {
        cout<<"Enter testcode:"<<endl;
        cin>>testcode;
        cout<<"Enter description:"<<endl;
        cin>>description;
        cout<<"Enter nocandidate:"<<endl;
        cin>>nocandidate;
        calcltr();
    }
    int  disptest() 
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"no of centre:"<<calcltr()<<endl;
    }   
};
int main()
{
    Test t;
    t.schedule();
    t.disptest();
}