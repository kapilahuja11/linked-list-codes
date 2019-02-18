#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
struct node* root=NULL,*pk;


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

struct node* copyelement()
{
	struct node *p=root,*temp=NULL,*temp1;
	if(root==NULL)
	  printf("\nlist is empty");
	else
	{
		while(p!=NULL)
		{
			if(temp==NULL)
			{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=p->data;
			temp->next=NULL;
			temp1=temp;
		   }
		   else
		   {
		   	temp1->next=(struct node*)malloc(sizeof(struct node*));
		      temp1=temp1->next;
		      temp1->data=p->data;
		      temp1->next=NULL;
		   }
		   p=p->next;
		}
	}
	return temp;
	}
	
void display()
{
	struct node* temp;
	temp=pk;
	if(pk==NULL)
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
	printf("\n1.add node at the end:");
	printf("\n2.copy one list into another list:");
	printf("\n3.display:");
	printf("\n4.exit:");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:pk=copyelement();
	     	break;
	     	case 3:display();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
}
