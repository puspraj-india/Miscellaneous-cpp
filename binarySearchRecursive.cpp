#include<iostream>
using namespace std;

int binarysearch(int a[],int l,int h,int k)
{
	if(l<=h)
	{
	int mid=(l+h)/2;
	if(a[mid]!=k )
	{
		if(k>a[mid])
		l=mid+1;
		else
		h=mid-1;
		return binarysearch(a,l,h,k);	
		
	}
	else 
	return mid+1;
}
else return -1;
	
}


int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	cout<<binarysearch(a,0,n-1,k);
}
