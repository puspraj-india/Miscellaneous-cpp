#include<iostream>
#include<fstream>
using namespace std;
class file
{
	int id;
	char *name;
	char *department;
	public:
		file()
		{
			name = new char[20];
			department = new char[20];
		}
		void getDetails()
		{
			cout<<"Enter the id of the candidate\t";
			cin>>id;
			cout<<"Enter the name of the candidate press \'!\' to terminate\t";
			cin.getline(name,20,'!');
			cout<<"Enter the department of the candidatepress \'!\'\t to terminate\t";
			cin.getline(department,20,'!');
		}
		void showDetails()
		{
			cout<<"Uid is\t"<<id<<endl;
			cout<<"Name is \t"<<name<<endl;
			cout<<"Department is\t"<<department;
		}
		~file()
		{
			delete[] name;
			delete[] department;
			name=NULL;
			department=NULL;
		}
};
int main()
{
	file obj;
	fstream stream;
	stream.open("firstninaryfile.dat",ios::out);
	if(stream==NULL)
	{
		cout<<"Unable to open file ";
		return 0;
	}
	obj.getDetails();
	stream.write((char *)&obj,sizeof(obj));
	stream.close();
	return 0;
	
}
