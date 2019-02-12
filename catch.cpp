#include<iostream>
#include<process.h>
using namespace std;
void function()
{
	char ch[]="raj";
	try
	{
		throw ch;
	}
	catch(...)
	{
	}
}

int main()
{
	try
	{
		function();
	}
	return 0;
}

