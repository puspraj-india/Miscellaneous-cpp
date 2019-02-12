#include<iostream>
using namespace std;
int main()
{
	int T,N,P,count1=0,count2=0;
	cin>>T;
	while(T)
	{
	cin>>N>>P;
	count1=0,count2=0;
	int a[N];
	for(int i=0;i<N;i++)
	{cin>>a[i];
	if(a[i]>=P/2)
	{
		count1++;
	}
	if(a[i]<=P/10)
	{
		count2++;
	}
}
if(count1==1&&count2==2)
{
	cout<<"yes"<<endl;
}
else cout<<"no"<<endl;
T--;
}
return 0;	
}
