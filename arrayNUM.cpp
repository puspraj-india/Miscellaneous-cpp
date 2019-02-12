#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i,j,m=1,num=0;
	cin>>n;
	vector<int> a;
	/*for(i=0;i<n;i++)
	{
		cin>>j;
		a.push_back(j);
	}
	for(i=0;i<n;i++)
	{
		if(a[n-i-1]==0)
		{
			m*=10;
			continue;
		}
		num=a[n-i-1]*m+num;
		m*=10;
	}
	m=10;
	num=num+1;
	a.clear();
	int rem=0;
	a.resize(0);
	for(int i=0;num!=0;i++)
	{
		if(num%m==0)
		continue;
		a.push_back(num/m);
		rem=
		m=m/10;
	}
	for(i=0;i<a.size();i++)
	{
		cout<<a[i]<<"  ";
	}*/
	for(i=0;i<n;i++)
	{
		cin>>j;
		a.push_back(j);
	}
	if(a[a.size()-1]==9&&a[0]==9)
	{
		i=0;
		while(a[a.size()-1-i]==9&&!a.empty())
			{
				a[a.size()-1-i]=0;
				i++;
			}
		if(i==a.size())
		{
			a.resize(n+1);
			for(i=n;i>=1;i--)
			a[i]=a[i-1];
			a[0]=1;
		}
		else
		{
			a[a.size()-1-i]+=1;
		}
	}
	else
	{
		i=0;
		if(a[a.size()-1]==9)
		{
			while(a[a.size()-1-i]==9&&!a.empty())
			{
				a[a.size()-1-i]=0;
				i++;
			}
			a[a.size()-i-1]+=1;
		}
		else
		{
			a[a.size()-1]+=1;
		}
	}
	for(i=0;!a.empty();i++)
	{
		cout<<a[i]<<"  ";
	}
	
}
