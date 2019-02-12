#include<iostream>
using namespace std;

static int a(int b)
{
	return b;
}
static int a(char ch)
{
	return ch+1;
}


int main(int argc,char *argv[])
{
	cout<<argc;
	cout<<a(65);
	cout<<a('A');
	return 0;
}
