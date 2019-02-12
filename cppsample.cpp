#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	string a;
	
	int i,t,j,min,temp,count=0,l;
	cin>>t;
	fflush(stdin);
	while(t--){
	min=0;
	getline(cin,a);
	int coll[26]={0};
	l=a.length();
	for(i=0;i<l;i++)
	{
		coll[a[i]-97]++;
	}
	
	for(i=0;i<26 &&min!=100001;i++)
	{
		min=100001;
		for(j=0;j<26;j++)
		{
			if(coll[j]>0)
			{
				if(min>coll[j])
				{
					min=coll[j];
					temp=j;
				}
			}
		}
		coll[temp]=0;
		if(min!=100001)
		cout<<(char)(temp+97);
	}
	cout<<endl;

}
	
}
