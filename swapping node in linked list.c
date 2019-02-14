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

void swap()
{
	int x,y,i=1,j=1;
	struct node* p,*q,*r;
	p=root;
	q=root;
	r=root;
     printf("enter the two location which you want to swap:");
     scanf("%d%d",&x,&y);
     while(i!=(y-1))
     {
     	r=r->next;
     	i++;
	 }
	 
	 while(j!=(x-1))
	 {
	 	p=p->next;
	 	j++;
	 }
	 q=p->next;
	
	p->next=r->next;
	r->next=q;
	q=q->next;
	r->next->next=p->next->next;
	p->next->next=q;
	
}


void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
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
	printf("\n2.swap the node:");
	
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
	     	case 2:swap();
	     	break;
	     	case 3:display();
	     	break;
	     	case 4:exit(0);
	     	break;
		 }
	}
}
