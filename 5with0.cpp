#include<iostream>
using namespace std;
int main()
{
	int x,z=1;
	cin>>x;
	while(z<x)
	{
		if((x/z)%10==5)
		{
			x=(x/(10*z)*10*z + x%z);
		}
		z=z*10;
	}
	cout<<x;
}
