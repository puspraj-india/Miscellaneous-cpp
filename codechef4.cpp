#include<iostream>
using namespace std;
void mergesort(int a[],int l,int m,int e)
{
	int s1=m-l+1;
	int s2=e-m;
	int b[s1],c[s2],i=0,j=0,k=l;
	for(i=0;i<s1;i++)
	{
		b[i]=a[l+i];
	}
	for(j=0;j<s2;j++)
	{
		c[j]=a[m+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<s1 && j<s2)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			i++;
		}
		else 
		{
			a[k]=c[j];
			j++;
		}
		k++;
	}
	while(i<s1)
	{
		a[k]=b[i];
		k++;i++;
	}
	while(j<s2)
	{
		a[k]=c[j];
		j++;k++;
	}
	
}
void merge(int a[],int l,int e)
{
	
	if(l<e)
	{
		int m=(l+e)/2;
		merge(a,l,m);
		merge(a,m+1,e);
		mergesort(a,l,m,e);
	}
	
}
int main()
{
	int T,N,K,j,i;
	cin>>T;
	while(T)
	{
		cin>>N>>K;
		int a[N];
		for(i=0;i<N;i++)
		cin>>a[i];
		if(K==0)
		{
			merge(a,0,N-1);
			for(j=0;j<N;j++)
			{
				if(j!=a[j])
				{
				cout<<j<<endl;
				break;
			}
		}
			if(j==N)
			cout<<j<<endl;
	}
		else
		{
			i=0;
			merge(a,0,N-1);
			for(j=0;j<N+K;j++)
			{
				if(j!=a[j]&&i<K)
				{
					a[N+i]=j;
					i++;
				}
				merge(a,0,N+i-1);
			}
			for(j=0;j<N+K;j++)
			{
				if(j!=a[j])
				{
					cout<<j<<endl;
					break;
				}
			}
			if(j==N+K)
			{
				cout<<j<<endl;
			}
		}
		
		
		
		T--;	
	}
}
