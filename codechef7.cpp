#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,l,r,k,i,q;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	a[i]=0;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>l>>r;
		for(int j=l-1;j<r;j++)
		a[j]+=1;
	}
	sort(a,a+n);
	cin>>q;
	for(int j=0;j<q;j++)
	{
		
		cin>>k;
		i=0;
		while(a[i]<k)
		{
			i++;
		}
		if(i>n)cout<<0<<endl;
		else cout<<(n-i)<<endl;
		
	}
	return 0;
}
