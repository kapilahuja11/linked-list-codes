#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* top=NULL;

void push()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data:");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
}
 void pop()
 {
 	struct node* temp;
 	temp=top;
 	if(top==NULL)
 	printf("\n no element");
 	else
 	{
 		temp=top;
 		printf("element %d ",temp->data);
 		top=top->link;
 		temp->link=NULL;
 		free(temp);
	 }
 }
 
 void print()
 {
 	struct node* temp;
 	if(top==NULL)
 	printf("stack is empty");
 	else
 	{
 		temp=top;
 		while(temp!=NULL)
 		{
 			printf("%d",temp->data);
 			temp=temp->link;
		 }
	 }
 }
 
 int main()
{
	int ch;
	printf("\n1.push into stack:");
	printf("\n2.pop element in stack:");
	printf("\n3.print element in stack:");
	printf("\n4.exit");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
	     switch(ch)
	     {
	     	case 1:push();
	     	  break;
	     	case 2:pop();
	     	break;
	     	case 3:print();
	     	break;
	       	case 4:exit(0); 
	     	break;
	     	default:printf("\nyou have entered wrong choice:");
		 }
	}
	
	
	
	
	
}
