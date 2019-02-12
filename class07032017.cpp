#include<iostream>
using namespace std;
class A
{
	protected:
	void get()
	{
		cout<<"Raj";
	}		
	public:
		void show()
		{
			cout<<"Pusp";
		}
};
class B:public A
{
	public:
		 B()
		{
			get();
		}
};


int main ()
{
	B obj;
	return 0;	
}
