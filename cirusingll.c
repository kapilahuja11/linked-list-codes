#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *f=NULL;
struct node *r=NULL;
void enqueue()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data:");
		scanf("%d",&temp->data);
		temp->next=NULL;
	if(r==NULL)
	{
		
		f=temp;
		r=temp;
	}
	else
	{
		   r->next=temp;
	    	r=r->next;
	           	
	}
	r->next=f;
}
void dequeue()
{
	int val;
	struct node *temp1;
	if(f==NULL)
	printf("we cannot perform deueue operation in linked list");
	else
	{
		if(f==r)
		{
			val=f->data;
			printf("\nyour deleted item %d:",val);
			temp1=f;
			f=r=NULL;
			free(temp1);
		}
		else
		{
			val=f->data;
			printf("\nyour deleted item %d:",val);
			temp1=f;
			f=f->next;
			r->next=f;
			free(temp1);
		}
		
		
	}
}
void display()
{
	struct node* temp2;
	temp2=f;
	for(;temp2!=r;temp2=temp2->next)
	{
		printf("%d->>",temp2->data);
	}
	
		   printf("%d",temp2->next);
}
int main()
{
	int ch;
	printf("\n1.perform enqueue in linked list:");
	printf("\n2.perform dequeue in linked list:");
	printf("\n3.display:");
	printf("\n4.exit :");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:enqueue();
	     	  break;
	     	case 2:dequeue();
	     	break;
	     	case 3:display();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
	
	
	
	
}
