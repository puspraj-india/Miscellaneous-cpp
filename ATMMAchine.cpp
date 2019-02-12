#include<iostream>
using namespace std;
int main()
{
/*	int T,n,k,t;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			if(k>0 &&k-t>=0)
			{
				cout<<1;
				k=k-t;
			}
			else cout<<0;
		}
		cout<<endl;
	}*/
	
	for(int i=1;i<=30;i++)
	{
		for(int j=i+1;j<=30;j++)
		{
			if(j*j-i*i==34)
			{
				cout<<i<<"  "<< j;
				break;
			}
		}
	}
}
