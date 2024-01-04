#include<iostream>
using namespace std;
class student{
    int ano;
    char sname[20];
    float eng,maths,science,total;
    int ctotal()
    {
        total=eng+maths+science;
        return total;
    }
    public:
    void takedata()
    {
        cout<<"Enter admin no: ";
        cin>>ano;
        cout<<"Enter student no: ";
        cin>>sname;
        cout<<"Enter eng marks: ";
        cin>>eng;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter science marks: ";
        cin>>science;
        ctotal();
    }
    void showdata()
    {
        cout<<"your admin no:"<<ano<<endl;
        cout<<"your student name:"<<sname<<endl;
        cout<<"your eng marks:"<<eng<<endl;
        cout<<"your maths marks:"<<maths<<endl;
        cout<<"your science marks:"<<science<<endl;
        cout<<"your total is:"<<total<<endl;
    }
};
int main()
{
    student t;
    t.takedata();
    t.showdata();
}