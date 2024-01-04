#include<iostream>
using namespace std;
int display(int a,int b,int c,int d)
{
	cout<<"math:"<<a <<"\nscience :"<<b <<"\nenglish :"<<c <<"\ntotal: "<<d;
}
int cal(int x,int y,int z)
{
	int p;
	p=x+y+z;
	display(x,y,z,p);
}
int setdata()
{
	int m,s,e,t;
	cout<<"Enter math marks:";
	cin>>m;
	cout<<"Enter science marks:";
	cin>>s;
	cout<<"Enter english marks:";
	cin>>e;
	cal(m,s,e); 
}
int main()			
{	
	setdata();
}