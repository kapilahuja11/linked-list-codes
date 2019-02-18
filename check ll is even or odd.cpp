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
int even_odd()
{
	int count=0;
	struct node* temp1=root;
	while(temp1!=NULL)
	{
		count++;
		temp1=temp1->next;
	}
	if(count%2==0)
	  return 1;
	  return 0;
	
}




int main()
{
	int ch,c;
	printf("\n1.add node at the end:");
	printf("\n2.check linked list is even or odd :");
	printf("\n4.exit:");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:
	     	           c=even_odd();
	     	           if(c==1)
	     	           printf("\nlist is even ");
	     	           else
	     	           printf("\n list is odd in number");
	     	break;
	       	case 3:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
}
	

