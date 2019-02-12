#include<iostream>
using namespace std;
int main()
{
	int T,n,f;
	cin>>T;
	while(T--!=0)
	{
		f=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n && f==0;i++)
		{
			if(a[i]==1)
				continue;
			for(int j=0;j<n;j++)
			{
				if(i==j)
				continue;
				if((a[i]>a[j]?a[i]%a[j]:a[j]%a[i]))
				{
					f=1;
					break;
				}
			}
			
			
		}
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
