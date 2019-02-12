#include<iostream>
using namespace std;
void division(double a,double b)
{
	cout<<"\nThe division is \t"<<(a/b);
}
int main()
{
	double num1,num2;
	cout<<"\nEnter the first number\t";
	cin>>num1;
	try
	{
		cout<<"\nEnter second number \t";
		cin>>num2;
		if(num2==0)
		{
			throw num2;
		}
		else
		division(num1,num2);
	}
	catch(double x)
	{
		cout<<"\nThe division exception\t";
	}	
	return 0;
}
