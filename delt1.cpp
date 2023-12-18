#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node* create(int item)
{
	Node* newnode = new Node;
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
Node* insert(Node* root, int item)
{
	if(root==NULL)
		return create(item);
	if(item<root->data)
		root->left=insert(root->left,item);
	else if(item>root->data)
		root->right=insert(root->right,item);
	return root;
	
}
void display(Node* root)
{
	if(root==NULL)
		return;
	display(root->left);
	cout<<root->data<<" ";
	display(root->right);
}
Node* deleteNode(Node* root, int no)
{
	if (root==NULL)
		return root;
	if(no<root->data)
	{
		root->left=deleteNode(root->left,no);
	}
	else if(no<root->data)
	{
		root->right=deleteNode(root->right,no);
		return root;
	}
	//one child
	if(root->left==NULL)
	{
		Node* temp=root->right;
		delete root;
		return temp;
	}
	else if(root->right==NULL)
	{
		Node* temp=root->left;
		delete root;
		return temp;
	}
	else
	{
		//two child
		Node* succParent=root;
		Node* succ=root->right;
		while(succ->left!=NULL)
		{
			succParent=succ;
			succ=succ->left;
		}
		if(succParent!=root)
		{
			succParent->left=succ->right;
		}
		else
		{
			succParent->right=succ->right;
		}
		root->data=succ->data;
		delete succ;
		return root;
	}
}
int main()
{
	Node* root = NULL;
	int n;
	cout<<"Enter the Range: ";
	cin>>n;
	int a[n];
	cout<<"Enter all Elements of the BST: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		root=insert(root,a[i]);
	}
	cout<<"BST created successfully.\n";
	cout<<"Inorder traversal of the BST is: ";
	display(root);
	int no;
	cout<<"\nEnter the number you want to delete:";
	cin>>no;
	root=deleteNode(root,no);
	cout<<"Inorder traversal after the deletion: ";
	display(root);
	return 0;
} 