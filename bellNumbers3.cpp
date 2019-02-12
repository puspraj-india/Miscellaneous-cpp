#include<iostream>
using namespace std;
int main()
{
	int n,i=0,j=0,z=0;
	cin>>n;
	int arr[n],b[n];
	arr[0]=1;
	for(i=1;i<n;i++)
	{
		for(z=0;z<i;z++)
		b[z]=arr[z];
		arr[0]=b[z-1];
		
		for(j=1;j<=i;j++)
		{
			
			arr[j]=arr[j-1]+b[j-1];
		}
	}
	
	for(i=0;i<n;i++)
	cout<<arr[i]<<"  ";
return 0;
}
