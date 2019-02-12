#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int l=0;
	int u=n-1;
	int item;
	cin>>item;
	int mid=(l+u)/2;
	while(l<=u&&a[mid]!=item)
	{
		if(item<a[mid])
		u=mid-1;
		else
		l=mid+1;
		mid=(u+l)/2;
	}
	if(l>u)
	cout<<"Item not found";
	else cout<<"Item found at "<<mid+1<<" Position";
}
