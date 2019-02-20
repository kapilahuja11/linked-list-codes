#include<stdio.h>
#include<stdlib.h>
#define max 20
struct node
{
	int data;
	struct node* next;
};
struct node* root=NULL;

int stack[max],top=-1;
void push(int data)
{
	top=top+1;
	stack[top]=data;
}

int pop()
{
	int k=stack[top];
	top=top-1;
	return k;
}

void insertatend()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
	  struct node* temp1;
	  temp1=root;
	    	while(temp1->next!=NULL)
	    	{
	    		temp1=temp1->next;
			}
			temp1->next=temp;
			temp->next=NULL;
		}	
}
int sum(int n)
{
	int sum;
	struct node* temp=root;
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->next;
	}
	while(n--)
	{
		sum=sum+pop();
	}
	return sum;
}

int main()
{
	int ch,result,n;
	printf("\n1.enter data in linked list:");
	printf("\n2.sum of n node from the end:");
	printf("\n3.exit");
	while(1)
	{
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		  case 1:insertatend();
		   break;
		   case 2:printf("\n enter nth node ");
		       scanf("%d",&n);
			   result=sum(n);
			   printf("sum of nth node is %d:",result);
			   break;
			case 3:exit(0);
			break;	
		}
		
	}
}
