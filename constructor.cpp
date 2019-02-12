#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		
	A(): a(4){};
	void show()
	{
		cout<<"a"<<a;
	}
};
int main ()
{
	A obj;
	obj.show();
	return 0;
}
