#include<iostream>
using namespace std;
int main(char args[])
{
	int n;
	cout<<"\nEnter the size of the array\t";
	cin>>n;
	int a[n];
	cout<<"\nEnter the array elements\t";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	cout<<"\nThe elements after sorting is \t";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
}
