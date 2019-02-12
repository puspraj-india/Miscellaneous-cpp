#include<bits/stdc++.h>
using namespace std;
int main()
{
	int **a = (int **)calloc(sizeof(int),10);
	for(int i=0;i<10;i++)
	{
		a[i]= (int *)calloc(sizeof(int),10);
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		cout<<a[i][j]<<"  ";
		cout<<endl;
	}
}
