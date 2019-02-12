#include<iostream>
using namespace std;
template<class T>
void sort_asc(T arr[],int n)
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
template<class T>
void sort_desc(T arr[],int n)
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
template<class T>
void display(T arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
}
int main()
{
	int n,i,choice;
	char ch;
	cout<<"Enter the size of your array\t";
	cin>>n;
	int arr[n];
	cout<<"Enter your array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	do
	{
	cout<<"\nPress 1 to sort your array in Ascending order";
	cout<<"\nPress 2 to sort array in Descending order";
	cout<<"\nPress 3 to display your array";
	cout<<"\nEnter your choice\t";
	cin>>choice;
	switch(choice)
	{
	case 1:
		sort_asc(arr,n);
		cout<<"\nArray sorted in ascending order";
		break;
	case 2:
		sort_desc(arr,n);
		cout<<"\nArray sorted in Descending order";
		break;
	case 3:
		cout<<"Your Array is \n";
		display(arr,n);
		break;
	default:
		cout<<"\nEntered wrong choice";
		break;
	}cout<<"\nWant to continue (Y/N)..\t";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
