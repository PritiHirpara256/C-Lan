#include<iostream>
using namespace std;
int main()
{
    char str[50],a[50];
    cout<<"Enter value:";
    cin>>str;
    int i=0,len=0,k;
    while(str[len] != '\0')
    {
        len++;
    }  
    k=len-1;
    while(i<len)
    {
        a[i++]=str[k--];
    }
    a[len]='\0';
    cout<<"REverse value:"<<a;
}