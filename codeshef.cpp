#include<iostream>
using namespace std;
int main()
{
	int T[200],i,j,k,count,n,l,flag=0;
	//0 for dissimilar  and 1 for similar
	char dish1[4][11],dish2[4][11];
	cin>>n;
	n=n>200?n%200:n;
	n=n==0?n+1:n;
	for(i=0;i<n;i++)
	{
		for(k=0;k<4;k++)
		cin>>dish1[k];
		for(k=0;k<4;k++)
		cin>>dish2[k];
		count =0;
	for(j=0;j<4;j++)
	{	
		for(k=0;k<4;k++)
		{
			l=0;
			flag=0;
			
			while(dish1[j][l]!='\0')
		{
			if(dish1[j][l]!=dish2[k][l])
			{
				flag=1;
				break;
			}l++;
		}
		if(flag==0)
			{
				count++;
			}
			}
		
	}
	if(count>=2)
		T[i]=1;
		else
		T[i]=0;
		
	}
	for(i=0;i<n;i++)
	{
		if(T[i]==0)
		cout<<"Dissimilar"<<endl;
		else cout<<"Similar"<<endl;
	}
	return 0;
	
}
