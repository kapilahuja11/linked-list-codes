#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
struct node* root=NULL;
struct node* addatpos(int number,int pos);

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
 struct node* insertinsorted(int number)
 {
 	int pos=0;
 	struct node* temp=root;
 	while(temp!=NULL)
 	{
 		if(temp->data>number)
 		 break;
 		 temp=temp->next;
 		 pos++;
	 }
	 root=addatpos(number,pos);
	 return root;
 }
 
 struct node* addatpos(int number,int pos)
 {
 	int intial_pos=1;
 	struct node* mover=root,*temp;
 	while(intial_pos!=pos)
 	{
 		mover=mover->next;
 		intial_pos++;
	 }
	 temp=(struct node*)malloc(sizeof(struct node));
	 temp->data=number;
	 temp->next=mover->next;
	 mover->next=temp;
	 return root;
	 
 }
 
 void display()
{
	struct node* temp;
	temp=root;
	if(root==NULL)
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
	int ch,number;
	printf("\n1.add node at the end:");
	printf("\n2.insert the node in sorted linked list :");
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
	     	case 2:printf("\n enter the data which you want to insert in linked list");
	     	      scanf("%d",&number);
		           insertinsorted(number);
	     	break;
	     	case 3:display();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	 	default:printf("\nyou have entered wrong choice:");
		 }
	}
}
