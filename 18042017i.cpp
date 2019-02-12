#include<iostream>
#include<string.h>
using namespace std;
template<class T>
void search_element(T arr[],int n)
{
    T element;
    int i;
    cout<<"Enter the element you want to search\t";
	cin>>element;
	for(i=0;i<n;i++)
	{
		if(element ==arr[i])
		{
		 cout<<"Element found in "<<(i+1)<<" Location";
		 break;
		 }
	}
	if(i==n)
	{
		cout<<"\nThe element was not found in the array";
	}
}
int main()
{
	int n,i;
	cout<<"Enter the number of element in the array\t";
	cin>>n;
	int arr[n];
	cout<<"Enter your array \n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	search_element(arr,n);
	return 0;
}








