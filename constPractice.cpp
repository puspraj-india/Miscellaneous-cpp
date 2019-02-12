#include<iostream>
using namespace std;
int main()
{
	
	const int *a=NULL;//this constant is of the type read only of variable
					  //, it itself can't modify the value inside the variable but can read it
					  //can hold different address but these address are readable.
					  //remember  const int *a; and same for  int const *a;
/*	int const *b;
	int c=5;
	cout<<a<<endl;
	a=&c;
	c=10;
	int d=20;
	a=&d;
	cout<<*a<<endl;*/
	
	int const *b;
/*	int c=5;
	b=&c;
	c+=4;
	int d=6;
	b=&d;
	cout<<*b;
	*/
	int d=5;
	b=&d;
	int *const c=&d;//by default the address of the pointer variable is 0
				  // the address inside the variable can never be changed so it is fixed
				  //its better to assign the address at the starting else it can't be never be changed
				  //it can only hold the address of the common variable i.e it can't hold the address of other pointer
				  //remember int *const a
	cout<<*c;
	
	
	return 0;
	
}
