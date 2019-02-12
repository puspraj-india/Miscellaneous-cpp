#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k,l,m;
	int a[n],b[n];
	
	b[0]=a[0]=1;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		b[j]=a[j];
		a[0]=1;
		for(k=1;k<=i;k++)
		if(k!=i)
		a[k]=b[k-1]+b[k];
		else a[k]=1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
