#include<iostream>
using namespace std;
int main()
{
    float rate,qty,amt,dis,billamt,GST,netbill;
    cout<<"Enter rate:";
    cin>>rate;
    cout<<"Enter qty:";
    cin>>qty;
    amt=rate*qty;
    dis=(amt*5)/100;
    billamt=amt-dis;
    GST=(billamt*18)/100;
    netbill=billamt+GST;
    cout<<"rate\tqty\tamt\tdis\tbillamt\tGST\tnetbill\n";
    cout<<"\n"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<GST<<"\t"<<netbill;
}