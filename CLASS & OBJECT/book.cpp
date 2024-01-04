#include<iostream>
using namespace std;
class book
{
    int bookno,noofcopy;
    char title[20];
    float price;
    int total_cost(int N)
    {
        int totalcost;
        totalcost=N*price;
        cout<<"total cost of copies"<<totalcost<<endl;
    }
    public:
    int input()
    {
        cout<<"Enter book no."<<endl;
        cin>>bookno;        
        cout<<"Enter book title"<<endl;
        cin>>title;
        cout<<"Enter price(per copy)"<<endl;
        cin>>price;
        cout<<"number of copies"<<endl;
        cin>>noofcopy;
    }
    int purchase()
    {
        cout<<"bookno:"<<bookno<<endl;
        cout<<"book title:"<<title<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"no of copies:"<<noofcopy<<endl;
        total_cost(noofcopy);
    }
};
int main()
{
    book t;
    t.input();
    t.purchase();

}