#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int count,char* args[])
{
	cout<<"Write ";
	for(int i=1;i<count+1;i++)
	cout<<args[i]<<" ";
	return 0;
}
