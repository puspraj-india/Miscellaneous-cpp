#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T,max,min,max1,min1;
	long x,y;
	cin>>T;
	long a[3];
	while(T--)
	{
		cin>>a[0]>>a[1]>>a[2]>>x>>y;
		if(a[0]+a[1]+a[2]!=x+y)
		{
			cout<<"NO"<<endl;
			continue;
		}
		sort(a,a+3);
		max1=x>y?x:y;
		min1=x>y?y:x;
		if(a[1]+a[2]>=max1)
		{
			min1=a[1]+a[2]-max1+a[0];
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
