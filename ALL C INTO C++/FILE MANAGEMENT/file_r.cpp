#include<iostream>
using namespace std;
int main()
{
    FILE *fp;
    char buff[500];
    fp=fopen("abc.txt","r");
    while(cin>>(fp,buff) != EOF)
    {
        cout<<buff;
    }
    fclose(fp);   
}