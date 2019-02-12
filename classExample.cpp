#include<iostream>
using namespace std;
int maxdif(int *a,int a_count)
{
int min,flag=0;
int i=0,j=0,dif,k=0;
    min=a[0];
for(i=0;i<a_count-1;i++)
if(a[i]<=a[i+1])
flag=0;
else {flag=1;
break;
}
if(flag==0)
return -1;
for(i=1;i<a_count;i++)
{
    for(j=k++;j<i;j++)
    {
       if(min>a[j])
           min=a[j];
    }
    cout<<min<<"   ";
    if(dif<(a[i]-min))
        dif=a[i]-min;
}
    return dif;
}
int main()
{
	int a[]={1,2,3,4,5,14,7,9};
	cout<<endl<<maxdif(a,8);
	
}
