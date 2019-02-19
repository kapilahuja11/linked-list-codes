#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
struct node* root=NULL;


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

void segregate()
{
	struct node* temp=root;
	while(temp!=NULL)
	{
	  if(temp->data%2==0)
	   printf("%d->",temp->data);
	   temp=temp->next;
    }
      temp=root;
      while(temp!=NULL)
      {
      	if(temp->data%2!=0)
      	printf("%d->",temp->data);
      	  temp=temp->next;
	  }
}


int main()
{
	int ch,k;
	printf("\n1.enter data in linked list ");
	printf("\n2.segregate the linked list:");
	printf("\n3.exit :");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:segregate();
	     	break;
	       	case 3:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



