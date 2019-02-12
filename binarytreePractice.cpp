#include<iostream>
using namespace std;
struct tree
{
	int data;
	tree* left;
	tree* right;
}
tree* getNode(int item)
{
	tree* temp = new tree;
	tree->data=item
	tree->left=NULL;
	tree->right=NULL;
	return temp;
}
void insert(int item,tree*temp)
{
	if(temp->left==NULL)
	{
		temp->left=getNode(item);
		return;
	}
	else if(temp->right==NULL)
	{
		temp->right=getNode(item);
		return;
	}
	if(temp->left!=NULL)
	insert(item,temp->left);
	else
	insert(item,temp->right);
	
}
tree* root = NULL;
int main()
{
	return 0;
}
