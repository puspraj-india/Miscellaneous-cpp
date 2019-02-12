//write a program in which an array is given and if user enters a number then the array should be modified as 
//the index entered by user , upto that the array should be sent to last and after that the array should be at first

#include<iostream>
using namespace std;
int main()
{
	int n;
	int temp,k,i;
	cout<<"Enter the number of elements in array\t";
	cin>>n;
	int a[n];
	cout<<"\nEnter Elements\t";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"\nEnter the number of digits to be shifted\t";
	cin>>k;
	for(int j=k-1;j>=0;j--)
	{
		temp=a[j];
		for(i=j+1;i<n-k+1+j;i++)
		{
			a[i-1]=a[i];
		}
		a[i-1]=temp;
	}
	cout<<"\nElemets are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"  ";
}
