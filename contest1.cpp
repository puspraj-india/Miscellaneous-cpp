#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,bit,nib,byte,s,n;
	cin>>t;
	while(t--)
	{
		bit=nib=byte=0;
		cin>>n;
		s=n/27;
		if(n%27<3)
		{
			bit=1<<s;
		}
		else if(n%27<11)
		{
			nib=1<<s;
		}
		else
		{
			byte=1<<s;
		}
		cout<<bit<<" "<<nib<<" "<<byte;
	}
}
