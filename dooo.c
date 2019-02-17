#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* p=NULL;

void insertbeg()
{
	
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prev=NULL;
		if(p==NULL)
		{
			p=temp;
		}
		else
		{
			temp->next=p;
			temp->next->prev=temp;
			temp->prev=NULL;
			p=temp;
		}
}
void insertend()
{
	struct node* temp,*temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prev=NULL;
	if(p==NULL)
	{
		p=temp;
	}
	else
	{
		temp1=p;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->prev=temp1;
	}
}

void insertafter()
{
	int pos,i=1;
	struct node* temp,*temp1=p;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prev=NULL;
	printf("\nenter the loction where you insert:");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		temp1=temp1->next;
		i++;
	}
	temp->next=temp1->next;
	temp1->next->prev=temp;
	temp->prev=temp1;
	temp1->next=temp;	
}

void display()
{
	struct node* temp=p;
	if(p==NULL)
	printf("\nlist is empty");
	else
	{
	while(temp!=NULL)
	{
		printf("%d->>",temp->data);
		temp=temp->next;
		
	}
	printf("%d->>",temp->data);
   }
}
void deletebeg()
{
	struct node* temp=p;
   if(p==NULL)
   printf("\n we cannot perform delete operation");
   else
   {
   	p=temp->next;
   	temp->next=NULL;
   	free(temp);
   	
   }
}
void deleteend()
{
	struct node* temp=p;
	if(p==NULL)
	printf("\nwe cannot perform delete operation");
	else
	{
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->prev->next=NULL;
	temp->next=NULL;
	free(temp);
   }
}

void deletemiddle()
{
	int pos;
	int i=1;
	struct node* temp=p;
	printf("\nenter postion where you want to delete:");
	scanf("%d",&pos);
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	temp->next=NULL;
	temp->prev=NULL;
	free(temp);
}

int main()
{
	int ch;
	printf("\n1.add node at the beginning:");
	printf("\n2.add node at the end:");
	printf("\n3.add node in the middle:");
	printf("\n4.delete node beginning:");
	printf("\n5.delete node at end:");
	printf("\n6.delete node in  middle:");
	printf("\n7.display:");
	printf("\n8.exit");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertbeg();

	     	  break;
	     	case 2:insertend(); 
	     	break;
	     	case 3:insertafter();
	     	break;
	     	case 4:deletebeg();
	     	break;
	     	
	     	case 5:deleteend();
	     	break;
	     	case 6:deletemiddle();
	     	break;
	     	case 7:display();
	     	break;
	     	case 8:exit(0);
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
	
	
	
	
}
