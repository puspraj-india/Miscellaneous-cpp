#include<iostream>
using namespace std;
int min(int i,int n)
{
	return i<=n?i:n;
	
}
void minMax(int a[],int n)
{
	int min=a[0],max=a[0],i;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		max=a[i];
	}
	cout<<min<<" "<<max;
}
int main()
{
	int n,m,i,q,a,b,k,j;
	cin>>n>>m;
	int A[n];
	for(i=1;i<=5;i++)
	{
		A[i-1]=min(i,n-i);
	}
	while(m--)
	{
		cin>>q>>a>>b>>k;
		if(q==0)
		{
			j=0;
			for(i=a;i<=b;i++)
			{
				A[i-1]=A[i-1]+k;
				}	
		}
		else
		{
			j=0;
			for(j=a;j<=b;j++)
			{
				A[j-1]=A[j-1]-k;
			}
			
		}
		for(int l=0;l<n;l++)
		cout<<A[l]<<"   ";
	}
	
		minMax(A,n);
	return 0;
}
