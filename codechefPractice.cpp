#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int T,i,j,count;
	bool flag;
	cin>>T;
	int n;
	while(T--)
	{
		count=0;
		cin>>n;
		if(n==1){
			cout<<1;
			continue;
		}
		
		for (i=2;i<=n;i++)
		{
			flag=false;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=true;
					break;
				}
			}
			if(flag==false)
			v.push_back(i);
			
		}
		for(i=0;i<v.size();i++)
		{
			for(j=i;j<v.size();j++)
			{
				if(v[i]+v[j]==n)
				count++;
			}
			
		}
		v.clear();
		cout<<count<<endl;
	}
}
