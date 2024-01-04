#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    do{
        j=5;
        do{
            cout<<"*";
            j--;
        }while(j>=i);
        cout<<"\n";
        i++;
    }while (i<=5);
}