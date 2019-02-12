#include<iostream>
using namespace std;
template<typename T>
void swapNo(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers\t";
	cin>>a>>b;
	swapNo(a,b);
	cout<<"The swapped values are\t"<<a<<" "<<b;
	return 0;
}
