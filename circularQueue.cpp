#include<iostream>
using namespace std;
int a[5],N=5,front=-1,rear=-1;
void insert(int n)
{
	if((front==0 && rear==N-1)||rear==front-1)
	{
		cout<<"\nOverflow";
		return;
	}
	if(front==rear&&rear==-1)
	{
		front=rear=0;
		a[front]=n;
		return;
	}
	rear=(rear+1)%N;
	a[rear]=n;
}

//deletion of an element from queue


int delete_from_queue()
{
	if(front==-1)
	{
		cout<<"\nUnderflow";
		return -1;
		}
		
		else if(front==rear)
		{
			front=rear=-1;
			return 0;
		}
		front = (front+1)%N;
			
}

void traverse()
{
	if(rear==front==-1)
	{
		cout<<"\nQueue empty";
	}
	for(int i=front;i<=(front<=rear?rear:N-1);i++)
	{
		cout<<a[i]<<"   ";
	}
	if(rear<front)
	{
		for(int i=0;i<=rear;i++)
		{
			cout<<a[i]<<"  ";
		}
	}
}


int main()
{
int choice,n,i;
char ch='y';
while(ch=='y'or ch=='Y')
{cout<<"Press 1 for insertion\t";
cout<<"\nPress 2 for deleteion";
cout<<"\nPress 3 for treaversing";
cout<<"\nEnter your choice\t";

cin>>choice;
switch(choice)
{
	case 1:
		cout<<"\nEnter the element to be inserted ";
		cin>>n;
		insert(n);
		break;
	case 2:
		i=delete_from_queue();
		if(i!=-1)
		cout<<"\nElement deleted";
		break;
	case 3:
		traverse();
		break;		
	}
	cout<<"Press Y to continue\t";
	cin>>ch;
}
}
