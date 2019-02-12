#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
int main()
{
	ll n,m,k,i,j,index,l,max,max1,max2,max3,index1,index2,count=0,count1=0,tempmax,tempindex,tmax1,tmax2,x,y;
	int T;
	cin>>T;
	while(T--)
	{
		count=count1=0;
		max1=0;
			max2=0;
			index1=-1;
			index2=-1;
		i=j=0;
		index=-1;
		cin>>n>>m>>k;
		int a[n];
		char ch;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			count1+=a[i];
			if(a[i]==0)
			{
					if(max1<count)
					{
						tempmax=max1;
						tempindex=index1;
						max1=count;
						index1=(i-1+n)%n;
						
						if(max2<tempmax)
						{
							max2=tempmax;
							index2=tempindex;
						}
					}
					else if(max2<count)
					{
						max2=count;
						index2=(i-1+n)%n;
					}
					count=0;
				}
				else count++;
			
		}
		if(count1==n)
		{
			max=n<k?n:k;
			for(i=0;i<m;i++)
			{
				cin>>ch;
				if(ch=='?')
				{
					cout<<max<<endl;
				}
			}
		continue;
		}
		/*
		else
		{
			
			i=(index+1)%n;
			do
			{
				if(a[i]==0)
				{
					if(max1<count)
					{
						tempmax=max1;
						tempindex=index1;
						max1=count;
						index1=(i-1+n)%n;
						
						if(max2<tempmax)
						{
							max2=tempmax;
							index2=tempindex;
						}
					}
					else if(max2<count)
					{
						max2=count;
						index2=(i-1+n)%n;
					}
					count=0;
				}
				else count++;
				
				i=(i+1)%n;		
			}while(i!=(index+1)%n);
			
		}*/
		if(a[0]==1 && a[n-1]==1)
		{
			for(i=0;a[i]==1;i++);
			for(j=n-1;a[j]==1;j--);
			max3=i+(n-j+1);
			
		}
		if(max1==max2)
		{
			max=max1<k?max1:k;
			for(i=0;i<m;i++)
			{
				cin>>ch;
				if(ch=='?')
				{
					cout<<max<<endl;
				}
			}
		continue;	
		}
		else
		{
			for(i=0;i<m;i++)
			{
				cin>>ch;
				tmax1=max1;
				tmax2=max2;
				if(ch=='!')
				{
					index1=(index1+1)%n;
					index2=(index2+1)%n;
				}
				else
				{
					x=index1+1;
					y=index2+1;
					if(index1<(max1-1))
					{
						tmax1=(max1-x)>x?(max1-x):x;
					}
					else if(index2<(max2-1))
					{
						tmax2=(max2-y)>y?(max2-y):y;
					}
					max=tmax1>tmax2?tmax1:tmax2;
					if(max>k) cout<<k<<endl;
					else cout<<max<<endl;
				}
			}
		}		
		
	}
}
