#include<iostream>
using namespace std;
int main()
{
	int T,n,k,count;
	cin>>T;
	while(T--)
	{
		count=0;
		cin>>n;
		cin>>k;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			count++;
		}
		if(count>=k)
		cout<<"Good";
		else cout<<"Bad";
	}
	return 0;
}
