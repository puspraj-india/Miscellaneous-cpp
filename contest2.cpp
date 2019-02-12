#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n,greater<int>());
		int temp=arr[k-1];
		for(int i=k;i<n;i++)
		{
			if(arr[i]==temp)
				k+=1;
			else
			break;
		}
		cout<<k<<endl;
	}
}
