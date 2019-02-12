#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(A & obj1,A &obj2)
		{
			a=obj1.a+obj2.a;
		}
		A()
		{
			a=1;
		}
		void show()
		{
			cout<<"Hi";
		}
};
int main()
{
	A obj1,obj2;
	extern A obj;
	obj.show();
	A obj3(obj1,obj2);
	return 0;
}
A obj;
