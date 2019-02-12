#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *head;
node* new_node(int x)
{
	node *temp=new node;
	if(temp==NULL)
	{
		cout<<"\nOverflow";
		return NULL;
	}
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void insert_at_tail()
{
	int x;
	cout<<"Enter the node to be inserted\t";
	cin>>x;
	node *temp=new_node(x);
	if(temp==NULL)
	return;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
		return;
	}
	node *temp2=head;
	temp2=temp2->next;
	while(temp2->next!=head)
	{
		temp2=temp2->next;
	}
	temp2->next=temp;
	temp->next=head;
	
	cout<<"\nSuccessfully inserted";
}
void traverse()
{
	node*temp=head;
	if(temp==NULL)
	cout<<"NULL";
	cout<<temp->data<<"-->";
	temp=temp->next;
	while(temp!=head)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<head;
}
void delete_at_head()
{
	if(head==NULL)
	{
		cout<<"underflow";
		return;
	}
	//shifting head node to next node
	node *temp=head;
	temp=temp->next;
	node*temp2=head;
	if(temp==head)
	{
		delete temp;
		return;
	}
	head=temp;
	//assigning the last node with the new modified head
	while(temp->next!=temp2)
	{
		temp=temp->next;
	}
	temp->next=head;
}
void delete_at_tail()
{
	if(head==NULL)
	{
		cout<<"Underflow";
		return;
	}
	node*temp=head;
	if(temp->next==head)
	{
		head=NULL;
		delete temp;
	}
	temp=temp->next;
	node*prev=NULL;
	while(temp->next!=head)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=head;
	temp=NULL;
	delete temp;
}
int main()
{
	head=NULL;
	int choice=1;
	while(choice!=0)
	{cout<<"\nPress 1 for insertion at head\t";
	cout<<"\nPress 2 for traverse";
	cout<<"\nPress 3 for deletion from head";
	cout<<"\nPress 4 for deletion from tail";
	cout<<"\nEnter your choice\t";
	cin>>choice;
	switch(choice)
	{
		case 1:
			insert_at_tail();
			break;
		case 2:
			traverse();
			break;
			case 3:
				delete_at_head();
				break;
			case 4:
				delete_at_tail();
				break;
	}
	}
return 0;
}
