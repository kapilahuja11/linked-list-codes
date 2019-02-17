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

struct node* middle()
{
	struct node* temp1=root,*temp2=root;
	int index=1;
	while(temp2!=NULL)
	{
		int count=0;
		temp1=root;
		while(temp1!=NULL)
		{
			count++;
			temp1=temp1->next;
		}
		if(index==(count/2))
		break;
		
		index++;
		temp2=temp2->next;
	}
	return temp2;
}
int main()
{
	int ch;
	struct node* data;
	printf("\n1.add node at the end:");
	printf("\n2.find middle element:");
	printf("\n3.exit:");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:data=middle();
	              printf("middle element data is %d",data->data);	     
	     	break;
	     	case 3:exit(0);
	     	break;
	    	default:printf("\nyou have entered wrong choice:");
		 }
	}
}
