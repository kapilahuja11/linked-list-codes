#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* p=NULL;


void insertnode()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(p==NULL)
	p=temp;
	else
	{
		struct node *temp1;
		temp1=p;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
}


void reverseprint(struct node *q)
{
	if(q==NULL)
	{
		return;
	}
	reverseprint(q->next);
	printf("%d ",q->data);
}


int main()
{
int ch;
	printf("\n1.insert node:");
	printf("\n2.reverse:");
	printf("\n3.display:");
	printf("\n4.exit");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertnode();

	     	  break;
	     	case 2:reverseprint(p); 
	     	break;
	     	//case 3:display();
	     	//break;
	     	case 4:exit(0);
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
}

