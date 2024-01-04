#include<iostream>
using namespace std;
int main()
{
    char Str[50],Str1[50];
  	int i, j; 
    cout<<"\nEnter the First String :  ";
    cin>>Str;
    cout<<"\nEnter the second String :  ";
    cin>>Str1;
    i = 0;
	while( Str[i]!='\0')
	{
		i++;
	}
	j = 0;
  	while( Str1[j]!='\0')
  	{
  		Str[i] = Str1[j];
  		i++;
  		j++;
  	}
  	Str[i] = '\0';
	cout<<"\n merge String:"<<Str;
}