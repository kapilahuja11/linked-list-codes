#include<stdio.h>
#include<stdlib.h>
#define max 10
int f=-1,r=-1;
struct node* array[max];


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


void enqueue(struct node* q)
{
	if(r==max-1)
	printf("\n queue is full");
	else
	{
	
	 if(r==-1)
	 {
	 	f=r=0;
	 	array[r]=q;
	 }
	 else
	 {
	 	r=r+1;
	 	array[r]=q;
	 }
  }
}
struct node* dequeue()
{
	struct node* k;
	if(f==r)
	{
		k=array[f];
	   f=-1;
	   r=-1;   
    }
    else
    {
    	k=array[f];
    	f=f+1;
	}
	return k;
}
void levelorder(struct node* q)
{
	struct node* temp;
	if(q==NULL)
	  return;
	  enqueue(q);
	while(f!=-1 && r!=-1)
	{
		temp=dequeue();
		printf(" %d",temp->data);
		if(temp->left)
		  enqueue(temp->left);
		if(temp->right)
		   enqueue(temp->right);
		  
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
    levelorder(p);
    return 0;
}
