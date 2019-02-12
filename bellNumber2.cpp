#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],p,s=0,t;
	a[0]=1;
	p=1;
	for(int i=0;i<n;i++,s++)
	{
		
		for(int j=0;j<=s;j++)
		{
			t=a[j];
			if(j==0)
			{
				
				a[j]=p;
			}
			else
			{
				a[j]=p+t;
				p=a[j];
				
			}
			
		}
		p=a[s];
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	return 0;
}
