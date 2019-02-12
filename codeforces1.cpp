#include<iostream>
using namespace std;
int main()
{
	long long n,m,k;
		long long sum=0;
		cin>>n>>m>>k;
		while(k--)
		{
			sum+=(n+m)*2-4;
			n=n-4;
			m=m-4;
		}
		cout<<sum<<endl;
		return 0;
}
