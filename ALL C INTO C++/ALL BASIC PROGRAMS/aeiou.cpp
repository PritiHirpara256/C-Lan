#include<iostream>
using namespace std;
int main()
{
    char A,B,P;
    cout<<"Enter character:";
    cin>>P;
    A=(P == 'a' || P == 'e' || P == 'i' || P == 'o' || P == 'u');
    B=(P == 'A' || P == 'E' || P == 'I' || P == 'O' || P == 'U');
    if(A || B)
    {
        cout<<"this is vowel";
    }
    else
    {
        cout<<"this is consonent";
    }
}