#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"\nEnter the number of elements in array\t";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	/*cout<<a[0]<<"  ";
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i-1])
		cout<<a[i]<<"  ";
	}*/
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		{
			i=i+1;continue;
		}
		cout<<a[i-1]<<"  ";
	}
	if(a[n-1]!=a[n-2])
	cout<<a[n-1];
	return 0;
}
