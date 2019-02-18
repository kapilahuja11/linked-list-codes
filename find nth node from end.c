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

struct node* find_nth_node()
{
	struct node* temp1=root;
	struct node* temp2=root;
	int count=0,n;
	printf("\n enter the nth node from end");
	 scanf("%d",&n);
	     	        
	while(count!=n)
	{
		temp1=temp1->next;
		count++;
	}
	while(temp1!=NULL)
	{
		temp2=temp2->next;
		temp1=temp1->next;
	}
	return temp2;
}

int main()
{
	struct node *temp3;
	int ch;
	printf("\n1.add node at the end:");
	printf("\n2.find nth node from end :");
	printf("\n3.exit:");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2: temp3=find_nth_node();
	     	        printf("\n your node is %d",temp3->data);
	     	break;
	       	case 3:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
}
	

