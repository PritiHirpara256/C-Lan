#include<iostream>
using namespace std;
int main()
{
    FILE *fp;
    fp=fopen("abc.txt","w+");
    cout<<fp<<"hello guys\n";
    cout<<"my name is PRITI\n"<<fp;
    fclose(fp);
}