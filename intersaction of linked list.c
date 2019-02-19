#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* root1=NULL;
struct node* root2=NULL;


void linkedlist1()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(root1==NULL)
	{
		root1=temp;
	}
	else
	{
	  struct node* temp1;
	  temp1=root1;
	    	while(temp1->next!=NULL)
	    	{
	    		temp1=temp1->next;
			}
			temp1->next=temp;
			temp->next=NULL;
		}	
}


void linkedlist2()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(root2==NULL)
	{
		root2=temp;
	}
	else
	{
	  struct node* temp1;
	  temp1=root2;
	    	while(temp1->next!=NULL)
	    	{
	    		temp1=temp1->next;
			}
			temp1->next=temp;
			temp->next=NULL;
		}	
}
void intersaction()
{
	struct node *temp1=root1;
	struct node *temp2=root2;
	while(temp1!=NULL && temp2!=NULL)
	{
	    while(temp1!=NULL && temp2!=NULL)
	    {
		   
		if(temp1->data==temp2->data)
		{
			printf("%d->>",temp1->data);
			break;
		}
		else
		{
			temp2=temp2->next;
		}
		
	}

     temp2=root2;
	temp1=temp1->next;
    }
}

int main()
{
	int ch,k;
	printf("\n1.enter data in linked list one:");
	printf("\n2.enter data in linked list two:");
	printf("\n3.intersaction of linked list:");
	printf("\n4.exit :");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:linkedlist1();
	     	  break;
	     	case 2:linkedlist2();
	     	break;
	     	case 3:intersaction();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



