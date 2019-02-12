#include<iostream>
#include<stdio.h>
using namespace std;
class extraDetails
{
	public:
	char email[30],fName[20],mName[20];
}
class date:public extraDetails
{
	public:
	int day,month,year;
};
class applicationForm:public date
{
	public:	
	char name[20];
	void registration()
	{
		cout<<"\nEnter the name of the applicant\t";
		gets(name);
		cout<<"\nEnter the email id to be registered\t";
		gets(email);
		cout<<"\nEnter your fathers name\t";
		gets(fName);
		cout<<"\nEnter the mothers name\t";
		gets(mName);
		cout<<"\nEnter the date passing HSE (DD/MM/YYYY)\t";
		cin>>day>>month>>year;
	}
	void showDetails()
	{
		cout<<"\nName is \t"<<name;
		cout<<"\nEmail is\t"<<email;
		cout<<"\nFathers name\t"<<fName;
		cout<<"\nMothers name\t"<<mName;
		cout<<"\nDate of passing the HSE is\t"<<day<<"/"<<month<<"/"<<year;	
	}
};
int main()
{
	
}
