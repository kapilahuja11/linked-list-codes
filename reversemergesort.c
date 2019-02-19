#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* root1=NULL;
struct node* root2=NULL,*ds;
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
struct node* sortedmerge()
{
	struct node* a=root1,*b=root2,*res=NULL,*temp;
	if(a==NULL && b==NULL)
	return NULL;
	while(a!=NULL && b!=NULL)
	{
		if(a->data<=b->data)
		   {
		   	temp=a->next;
		   	a->next=res;
		   	res=a;
		   	a=temp;
		   }
		else
		   {
		   	temp=b->next;
		   	b->next=res;
		   	res=b;
		   	b=temp;
		   }
	}
	while(a!=NULL)
	{
		temp=a->next;
		a->next=res;
		res=a;
		a=temp;
	}
	while(b!=NULL)
	{
		temp=b->next;
		b->next=res;
		res=b;
		b=temp;
	}
	
	return res;
}


void display(struct node *ds)
{
	struct node* temp;
	temp=ds;
	if(ds==NULL)
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
	printf("\n2.enter data in linked list two:");
	printf("\n3.merge two sorted linked list and reverse:");
	printf("\n4.display :");
	printf("\n5.exit :");
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
	     	case 3:ds=sortedmerge();
	     	break;
	     	case 4:display(ds);
	     	break;
	       	case 5:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



