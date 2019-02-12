#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int *a = new int [n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int c_sum=a[0],closest_sum=a[0];
	for(int i=1;i<n;i++)
	{
		if(abs(k-c_sum-a[i])<=abs(k-c_sum))
		{
			c_sum=c_sum+a[i];
		}
		else
		{
			c_sum=a[i];
		}
		if(abs(k-closest_sum)>abs(k-c_sum))
		{
			closest_sum=c_sum;
		}
	}
	cout<<closest_sum;
}
