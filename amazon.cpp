#include<iostream>
using namespace std;
void rec(int a)
{
	cout<<a<<"  ";
	if(a>0)
	{
		rec(a-5);
		cout<<a<<"  ";
}
}
int main()
{
	
	int a;
	cin>>a;
	rec(a);
	return 0;
}
