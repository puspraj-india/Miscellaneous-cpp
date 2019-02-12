#include<iostream>
#include<stack>
#include<queue>
using namespace std;
struct tree
{
	public :
	int data;
	tree* left;
	tree *right;
};
tree* root=NULL;
tree* getNode(int item)
{
	tree* temp = new tree;
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(int item)
{
	tree* temp=getNode(item);
	if(root==NULL)
	{
		root=temp;
		return;
	}	
	tree* temp2=root;
	while(temp2!=NULL)
	{
		if(temp->data < temp2->data)
		{
			temp2=temp2->left;
		}
		else if(temp2->data<temp->data)
		{
			temp2=temp2->right;
		}
		else
		{
			cout<<"\nThe element already exists\t";
		}
	}
	
}
int main()
{
	
}
