#include<iostream>
using namespace std;
struct tree
{
	tree*left;
	tree*right;
	int data;
}*root=NULL;

tree* create_node(int x)
{
	tree* temp=new tree;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=x;
	return temp;
}
void insert_into_tree(int x)
{
	int flag;
	tree*temp=create_node(x);
	tree*temp2=root,*temp3=NULL;
	if(root==NULL)
	{
		root=temp;
		return;
	}
	while(temp2!=NULL)
	{
		if(temp2->data>x)
		{
			temp3=temp2;
			flag=0;
			temp2=temp2->left;
		}
		else
		{
			temp3=temp2;
			flag=1;
			temp2=temp2->right;
		}
	}
	if(flag==0)
		{
			temp3->left=temp;
		}
		else
		{
			temp3->right=temp;
		}
	
	
	
}

void preorder(tree*link)
	{
		cout<<link->data<<"  ";
		if(link->left!=NULL)preorder(link->left);
		if(link->right!=NULL)preorder(link->right);
	}
	
int height_tree(tree*temp)
{
	if(temp==NULL)
	return 0;
	int l=height_tree(temp->left);
	int r=height_tree(temp->right);
	if(l>r)
	{
		return l+1;
	}
	else
	return r+1;
}

int depth_node(tree*temp,int item)
{
	if(temp==NULL)
	{
		return -1;
	}
	if(item==temp->data)
	{
		return 0;
	}
	if(item<temp->data)
	{
		return depth_node(temp->left,item)+1;
	}
	else if(item>temp->data) return depth_node(temp->right,item)+1;
}


void height_of_each_node(tree* temp)
{
	
}
int main()
{
	insert_into_tree(10);
	insert_into_tree(15);
	insert_into_tree(6);
	insert_into_tree(11);
	insert_into_tree(8);
	insert_into_tree(19);
	insert_into_tree(20);
	insert_into_tree(32);
	insert_into_tree(18);
	insert_into_tree(12);
	insert_into_tree(14);
	preorder(root);	
	cout<<"\nThe height of the tree is \t"<<height_tree(root);
	
	cout<<"\nThe depth of 15 is \t"<<depth_node(root,14);
	return 0;
	
}
