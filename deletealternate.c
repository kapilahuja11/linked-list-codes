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
void deletealternate()
{
	struct node *temp1=root;
	struct node *temp2=root->next;
	while(temp1!=NULL && temp2!=NULL)
	{
		temp1->next=temp2->next;
		free(temp2);
		temp1=temp1->next;
		if(temp1!=NULL)
		  temp2=temp1->next;
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
	int ch;
	printf("\n1.enter data in linked list one:");
	printf("\n2.delete alternate node:");
	printf("\n3.display :");
	printf("\n4.exit :");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:deletealternate();
	     	break;
	     	case 3:display();
	     	break;
	     	case 4:exit(0);
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



