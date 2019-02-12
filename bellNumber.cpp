#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	int a[n];
	a[0]=1;
	int i=0,j=1,k=0;
	for(i=1;i<n;i++)
	{
		a[0]=a[j-1];
		for(j=0;j<i;j++)
		{
			a[j+1]=a[0]+a[j];
		}
		for(k=0;j<i;k++)
		cout<<a[k]<<"  ";
		cout<<endl;
	}
}
