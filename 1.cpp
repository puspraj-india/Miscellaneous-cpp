#include<iostream>
using namespace std;
int main()
{
unsigned long long n=1,x;
int m,i=0,T;
cin>>T;
cin>>m>>x;
while(T)
{n=1;i=0;
while(i<m)
{
	n=n*10;
	i++;
}
n=n-1;
n=n*x;
cout<<n;
T--;
}
return 0;
} 
