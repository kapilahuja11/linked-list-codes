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

int findmax(struct node* q)
{
	if(q==NULL)
	{
		printf("tree is empty\n");
		return -1;
	}
	else if(q->right==NULL)
	 return q->data;
	 return findmax(q->right);
}
int findmin(struct node *q)
{
	if(q==NULL)
	{
		printf("tree is empty\n");
		return -1;
	}
	else if(q->left==NULL)
	  return q->data;
	  return findmin(q->left);
}

int main()
{
	int k,kp;
	struct node* p=NULL;
    p=insert(p,50);
  	insert(p,40);
  	insert(p,80);
  	insert(p,20);
  	insert(p,45);
  	insert(p,100);
  	k=findmax(p);
  	kp=findmin(p);
  	printf("%d is maximum in a tree\n",k);
  	printf("%d is minmum in a tree\n",kp);
}
