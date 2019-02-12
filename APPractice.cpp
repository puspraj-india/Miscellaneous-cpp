#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int *a = (int *)calloc(40,sizeof(int));
	for(int i=0;i<40;i++)
	a[i]=10;
	a=(int *)realloc(a,41*sizeof(int));
	for(int i=0;i<50;i++)
	cout<<a[i];
	delete[] a;
}
