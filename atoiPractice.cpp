#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	char *ch=new char;
	//int c=atoi(strcpy(ch,s.c_str()));
	//OR
	char ch2[]={'2','5','7'}; // OR ch2[]="453453"
	int c = atoi(ch2);
	cout<<c;
}
