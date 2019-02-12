#include<iostream>
using namespace std;
class A
{
	public:
		int *a;
		A(int x)
		{
			a= new int(x);
		}
		~A()
		{
			delete a;
		}
		void disp()
		{
			cout<<"\nThe pointer value is\t"<<*a;
		}
};
void fun(A &obj)//this is correct without reference(&) the destructor of the object is called which leads to fault segementation
{
	cout<<"hi";
}
int main()
{
	A obj(3);
	fun(obj);
	obj.disp();
	return 0;
}
