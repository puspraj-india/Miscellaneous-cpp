#include<iostream>
using namespace std;
class intro
{
	public:
	intro()
	{
		cout<<"My profession is : Student";
		cout<<"\nMy age is 20.";
		cout<<"\nI can walk. I can talk. I can teach Engineering";
	}
	~intro()
	{
		cout<<"\nMy profession is : Footballer";
		cout<<"\nMy age is 19.";
		cout<<"\nI can walk. I can talk. I can play Football";	
	}
};
int main()
{
	intro obj;
	return 0;
}
