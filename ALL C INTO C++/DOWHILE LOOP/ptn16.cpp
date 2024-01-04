#include<iostream>
using namespace std;
int main()
{
    int i=5,j,k;
    do{
        j=1;
        do{
            cout<<"  ";
            j++;
        }while(j<=6-i);
        k=1;
        do{
            cout<<"* ";
            k++;
        }while(k<=i);
        cout<<"\n";
        i--;
    }while (i>=1);
}