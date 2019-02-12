#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter the number of elements in array\t";
	cin>>n;
	int a[n],i;
	cout<<"\nEnter elements in ascending order\t";
	for(i=0;i<n;i++)
	cin>>a[i];
	int j,mid,end,beg,loc;
	beg=0;end=n-1;
	mid = (beg+end)/2;
	cout<<"\nEnter the element to be searched\t";
	cin>>j;
	while(beg<end&&j!=a[mid])
	{
		if(j<a[mid])
		end=mid-1;
		else beg=mid+1;
		mid=(beg+end)/2;
	}
	if(j==a[mid])
	loc=mid+1;
	else loc=-1;
	if(loc!=-1)
	cout<<"Element found at "<<loc<<" location";
	else cout<<"\nElement not found ";
	return 0;
}
