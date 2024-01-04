#include<iostream>
using namespace std;
int main()
{
    char i=1,j,a=65;
    do{
        j=1;
        do{
            cout<<" "<<a;
            a++;
            j++;
        } while(j<=5);
        cout<<"\n";
        i++;
    }while(i<=5);
}