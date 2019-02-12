#include<iostream>
using namespace std;
class var
{
	static int i;
	int arr[6];
	public:
		var();
		void disp();
		int fun(int);
		
};
int var::i;
var::var()
{
	i=2;
	for(int j=0;j<=5;j++)
	arr[j]=j+1;
}

void var::disp()
{
	int sum=0;
	for(int i=0;i<4;i++)
	sum+=fun(arr[i]);
	cout<<"SUM = "<<sum;
	
}

int var::fun(int a)
{
	return (a+i++);
}

int main()
{
	var v;
	v.disp();
	return 0;
}
