#include<iostream>
using namespace std;
int main()
{
    int i=1,j,a=11;;
    do{
        j=1;
        do{
            cout<<" "<<a;
            a++;
            j++;
        } while(j<=5);
        a+=5;
        cout<<"\n";
        i++;
    }while(i<=5);
}