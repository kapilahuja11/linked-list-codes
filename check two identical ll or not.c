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
int check(){
	struct node *temp=root1,*temp1=root2;
	while(1)
	{
	if(temp->next==NULL && temp1->next==NULL)
	   return 1;
	if(temp->next==NULL || temp1->next==NULL)
	   return 0;
	if(temp->data!=temp1->data)
	  return 0;
	  
	  temp=temp->next;
	  temp1=temp1->next;
 }
}

int main()
{
	int ch,k;
	printf("\n1.enter data in linked list one:");
	printf("\n2.enter data in linked list two:");
	printf("\n3.check whther two ll are identical or not:");
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
	     	case 3:k=check();
	     	       if(k==1)
	     	       printf("\n linked list is identical");
	     	       else
	     	       printf("\n linked list is not identical");
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	
	}}
	
	



