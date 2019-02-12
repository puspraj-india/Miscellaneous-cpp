#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T,i,p=1,n,flag=0;
	cin>>T;
	while(T--)
	{
		
			cin>>n;
			int a[n];
			for(i=0;i<n;i++)
			cin>>a[i];
			sort(a,a+n);
			if(a[0]!=1)
				cout<<-1<<endl;
			else
			{
				
				for(i=1;i<n;i++)
				{
					flag=0;
					for(int j=2;j<=a[i]/2;j++)
					{
						if(a[i]%j==0)
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
					break;
				}
				if(i==n)
				{
					cout<<-1<<endl;
				}
				else if(flag==0) cout<<a[i]<<endl;
			}			
	}
	
	return 0;
}
