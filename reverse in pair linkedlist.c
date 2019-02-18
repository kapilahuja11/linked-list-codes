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

void reverseinpair()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* current=root;
	while(current!=NULL && current->next!=NULL)
	{
		temp->data=current->data;
		current->data=current->next->data;
		current->next->data=temp->data;
		current=current->next->next;
	}
}


void display()
{
	struct node* temp;
	temp=root;
	if(root==NULL)
	{
	printf("\n no nodes in the list:");
    }
	else
	{
		while(temp!=NULL)
		{
			printf("%d->>",temp->data);
			temp=temp->next;
		}
	}
}

int main()
{
	int ch,number;
	printf("\n1.add node at the end:");
	printf("\n2.reverse linked list in pairwise :");
	printf("\n3.display:");
	printf("\n4.exit");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:reverseinpair();
	     	break;
	     	case 3:display();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	 	default:printf("\nyou have entered wrong choice:");
		 }
	}
}
