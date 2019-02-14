#include<stdio.h>
#include<stdlib.h>
int top=-1;
char str[10];
int valid;
int s[10];
void push(char sym)
{
	top=top+1;
	s[top]=sym;
    
}


char pop()
{
	char k;
	k=s[top];
	top=top-1;
	return k;
}


int check(char str[])
{
	int j=0;
	char i;
	char sym;
	
	while(str[j]!= '\0')
	{
		sym=str[j];
		if(sym=='(' || sym=='[' || sym=='{')
		{
			push(sym);
		}
		if(sym==')' || sym==']'  || sym=='}')
		{
			if(top==-1)
			valid=0;
		    else
		    i=pop();
	    }
		if(i=='[' && sym==']' || i=='(' && sym==')'  || i=='{' && sym=='}' )
			valid=1;
		else
		     valid=0;	
		j++;
		}
	
	return (valid);
	
}

int main()
{
	
	printf("\nenter the string:");
	scanf("%s ",&str);
	valid=check(str);
	if(valid==1)
	{
		printf("\n string is valid");
	}
	else
	{
	printf("\n string is not valid");
    }
    return 0;
}
