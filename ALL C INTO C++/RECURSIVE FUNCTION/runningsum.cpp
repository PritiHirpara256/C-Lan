#include<iostream>
using namespace std;
void display(int a[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{	
		sum+=a[i];
		cout<<"\n"<<a[i];
		if(i==0)
		{
			cout<<"  ";
		}
		else
		{
			cout<<sum;	
		}
		sum=a[i];
	}
}
int main()
{
   int a[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value:";
		cin>>a[i];
	}	
	display(a); 
}