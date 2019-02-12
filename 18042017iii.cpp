#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
 ifstream file;
 char ch;
 file.open("18042017iii.cpp");
 if(file.fail())
 {
 	 cout<<"\nfile was unable to open";
	  exit(0);
 }
 while(!file.eof())
 {
     ch=file.get();
	 cout.put(ch);
 }
 file.close();
 }




