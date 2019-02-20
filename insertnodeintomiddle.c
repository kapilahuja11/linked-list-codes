#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* root1=NULL;
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
void insertmiddle()
{
	struct node *temp=root1,*temp2;
	int len=0,count;
	struct node *temp3;
	temp3=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data:");
	scanf("%d",&temp3->data);
	temp3->next=NULL;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	temp=root1;
	if(len%2==0)
	{
		count=len/2;
		while(count>1)
		{
			temp=temp->next;
			count--;
		}
		temp3->next=temp->next;
  	    temp->next=temp3;
		
	}
	else
	{
		count=(len+1)/2;
		while(count>1)
		{
			temp=temp->next;
			count--;
		}
		temp3->next=temp->next;
		temp->next=temp3;
	}
}


void display()
{
	struct node* temp;
	temp=root1;
	if(root1==NULL)
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
	printf("\n2.insert into middle:");
	printf("\n3.display :");
	printf("\n4.exit :");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:linkedlist1();
	     	  break;
	     	case 2:insertmiddle();
			break;
	     	case 3:display();
	     	break;
	     	case 4:exit(0);
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



