#include<iostream>
using namespace std;
int main()
{
    char i=65,j;
    do{
        j=1;
        do{
            cout<<i;
            j++;
        } while(j<=5);
        cout<<"\n";
        i++;
    }while(i<=69);
}