#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		class B
		{
			public:
			void fun()
			{
				cout<<"Print the values for inner class";
			}
		};
};
int main()
{
	A::B obj;
	obj.fun();
	return 0;
}
