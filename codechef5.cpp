#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int a,b,c;
	int count=0;
	while(T--)
	{
		c=0;
		cin>>a>>b;
		count=0;
		while(a!=0||b!=0)
		{
			{
				if(count!=0&&c==0&&((a%10)+(b%10))%10!=0)
				{
					for(int i=0;i<count;i++)
					{
						c=c*10;
					}
					
				}
				c=c*(((a%10)+(b%10))%10);
				count++;
			}
			a=a/10;
			b=b/10;
		}
		cout<<c;
	}
	return 0;
}
