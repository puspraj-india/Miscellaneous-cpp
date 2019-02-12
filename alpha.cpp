#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a number \t";
	cin>>ch;
	while(isalpha(ch))
	{
		cin>>ch;
	}
	cout<<ch;
	return 0;
}
