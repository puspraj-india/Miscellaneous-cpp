#include<iostream>
using namespace std;
int main()
{
	int T,count=0,sum=0,i;
	cin>>T;
	while(T--)
	{
		i=count=sum=0;
		int n,b,k=1;
		cin>>n>>b;
		int a[n];
		for( i=0;i<n;i++)
		cin>>a[i];
		for( i=1;i<=n&&(sum+k*(i)*(i+1)/2)<b;i++)
		{
			if(sum+a[i-1]+k*(i)*(i+1)/2<=b)
			{
				sum+=a[i-1];
				count++;
				k++;
			}
			
		}
		cout<<count<<" "<<sum+(k-1)*(i-1)*(i)/2;
		
	}
}
