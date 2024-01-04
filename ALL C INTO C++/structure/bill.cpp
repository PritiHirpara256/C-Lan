#include<iostream>
using namespace std;
struct bill
{
    int srno;
    char name[50];
    float rate,qty,amt,dis,billamt,GST,netbill;
};
int main()
{
    struct bill a[1];
    for(int i=0;i<1;i++)
    {
        cout<<"Enter srno";
        cin>>a[i].srno;
        cout<<"Enter name";
        cin>>a[i].name;
        cout<<"Enter rate";
        cin>>a[i].rate;
        cout<<"Enter qty";
        cin>>a[i].qty;
        cout<<"\n";
    }
    cout<<"srno\tname\trate\tqty\tamt\tdis\tbillamt\tGST\tnetbill\n";
    for(int i=0;i<1;i++)
    {
        cout<<a[i].srno<<"\t"<<a[i].name<<"\t"<<a[i].rate<<"\t"<<a[i].qty<<"\t";
        a[i].amt=a[i].rate*a[i].qty;
        cout<<a[i].amt<<"\t";
        a[i].dis=(a[i].amt*5)/100;
        cout<<a[i].dis<<"\t";
        a[i].billamt=a[i].amt-a[i].dis;
        cout<<a[i].billamt<<"\t";
        a[i].GST=(a[i].billamt*18)/100;
        cout<<a[i].GST<<"\t";
        a[i].netbill=a[i].billamt+a[i].GST;
        cout<<a[i].netbill<<"\t";
    }    
}