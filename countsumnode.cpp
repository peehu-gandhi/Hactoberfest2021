#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};
int countnode(node* root)
{
	if(root==NULL)
		return -1;
	 if(root==NULL)
	 	return -1;
	 queue<node*>q;
	 q.push(root);
	 int count=0;
	 while(!q.empty)
	 {
	 	node* n=q.front();
	 	q.pop();
	 	if(n->left&&n->right)
	 		count++;
	 	if(n->left!=NULL)
	 		q.push(n->left);
	 	if(n->right!=NULL)
	 		q.push(n->right);
	 }
	 return count;
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
cout<<countnode(root)<<endl;
cout<<sumnode(root)<<endl;

}
