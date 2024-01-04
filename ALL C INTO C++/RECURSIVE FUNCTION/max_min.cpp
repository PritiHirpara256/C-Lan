#include<iostream>
using namespace std;
void display(int a[])
{
    int i,max=a[0],min=a[0];
	for (i=1;i<5;i++)
	{
         if (a[i] > max)
        {
        	 max = a[i];
		}
		 if (a[i] < min)
       	{
        	  min = a[i];
      	}
	}
	cout<<"maximum number: "<<max;
	cout<<"minimum number: "<<min;
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