#include<iostream>
using namespace std;
class shape
{
	public:
	double b,h;	
	void get_data()
	{
		cout<<"\nEnter the height of the shape\t";
		cin>>h;
		cout<<"Enter the base of the shape\t";
		cin>>b;
	}
	virtual void display_area()
	{
		
	}
};
class triangle:public shape
{
	public:
	void display_area()
	{
		cout<<"\nThe area of the triangle is \t"<<0.5*b*h;
	}
};
class rectangle:public shape
{
	public:
		void display_area()
		{
			cout<<"\nThe area of the rectangle is\t"<<b*h;
		}
};
int main()
{
	shape *sobj1,*sobj2;
	triangle tobj;
	cout<<"Enter Details for triangle shape\n";
	rectangle robj;
	tobj.get_data();
	cout<<"\nEnter details for rectangle shape\n";
	robj.get_data();
	sobj1=&tobj;
	sobj2=&robj;
	sobj1->display_area();
	sobj2->display_area();
	return 0;
}
