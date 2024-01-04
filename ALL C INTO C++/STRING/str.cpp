#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter value:";
    cin>>str;
    cout<<"\nyour string is:"<<str;   
    int len=0;
    while(str[len] != '\0')
    {
        len++;
    }
    cout<<"\nyour string is:"<<len;
}