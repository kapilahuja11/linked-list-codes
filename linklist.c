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

void insertbeg()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data");
	scanf("%d ",&temp->data);
	temp->next=NULL;
	if(root==NULL)
	{
	   root=temp;
    }
	 else
	 {
	 	temp->next=root;
	 	root=temp;
	   }  
}

int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	 	while(temp!=NULL)
	 	{
	 		count++;
	 		temp=temp->next;
		 }
	 
	 return count;
}
 
void addafternode()
{
	struct node* temp,*temp1;
	int loc,i=1,len;
	printf("\nenter the location which you want to insert:");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
	printf("\n you have entered the wrong location ");
    }
	else
	{
		temp1=root;
		while(i<loc)
		{
			temp1=temp1->next;
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		  printf("\n enter the data:");
		  scanf("%d",&temp->data);
		  temp->next=NULL;
		  temp->next=temp1->next;
		  temp1->next=temp;
		
	}
	
	
	
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
void deletenode()
{
	struct node* temp;
	int loc;
	printf("enter loc to delete:");
	scanf("%d",&loc);
	if(loc>length())
	{
	printf("\ninvalid location");
    }
	else if(loc==1)
	{
		temp=root;
		root=temp->next;
		temp->next=NULL;
		free(temp);
		
	}
	else
	{
		struct node* p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->next;
			i++;
		}
		q=p->next;
		p->next=q->next;
		q->next=NULL;
		free(q);
	
	
	}
}
int main()
{
	int ch,l;
	printf("\n1.add node at the end:");
	printf("\n2.add node at the start:");
	printf("\n3.add node in the middle:");
	printf("\n4.delete node :");
	printf("\n5.display:");
	printf("\n6.exit");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:insertatend();
	     	  break;
	     	case 2:insertbeg();
	     	break;
	     	case 3:addafternode();
	     	break;
	       	case 4:deletenode(); 
	     	break;
	     	case 5:display();
	     	break;
	     	case 6:exit(0);
	     	break;
	     	case 7:l=length();
	     	printf("\n length of node is %d",l);
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
}
