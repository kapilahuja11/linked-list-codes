#include<Stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* left;
  struct node* right;
};

struct node* insert(struct node* q,int num)
{
	if(q==NULL)
	{
		q=(struct node*)malloc(sizeof(struct node));
		q->data=num;
		q->left=NULL;
		q->right=NULL;
		return q;
	}
	else
	{
		if(num < q->data)
		   q->left=insert(q->left,num);
		else
		   q->right=insert(q->right,num);
	}
}
void preorder(struct node* q)
{
	if(q)
	{
		printf("preorder: %d ",q->data);
		preorder(q->left);
		preorder(q->right);
	}
}

void inorder(struct node* q)
{
	if(q)
	{
		inorder(q->left);
		printf(" inorder: %d ",q->data);
		inorder(q->right);
	}
}
void postorder(struct node* q)
{
	if(q)
	{
		postorder(q->left);
		postorder(q->right);
		printf(" pos
		torder: %d",q->data);
	}
}
int main()
{
	struct node* p=NULL;
    p=insert(p,50);
  	insert(p,40);
  	insert(p,80);
  	insert(p,20);
  	insert(p,45);
  	insert(p,100);
  	preorder(p);
  	inorder(p);
  	postorder(p);
  }
  
