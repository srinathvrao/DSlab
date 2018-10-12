#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define bool int
struct stack
{
	char data;
	struct stack *next;
}*top=NULL,*temp7,*top1,*temp1;

void push(struct stack **p,int d)
{
	top=*p;
	temp7=(struct stack *)malloc(sizeof(struct stack));
	temp7->data=d;
	temp7->next=top;
	top=temp7;
}

int pop(struct stack **p)
{
	top1=(struct stack *)malloc(sizeof(struct stack));
	char d;
		top1=*p;
    	d = top1->data;
    	*p=top1->next;
    	free(top1);
     	return d;
}

bool matching(char a,char b)
{
	if(a=='(' && b==')')
	{
		return 1;
	}
	else if(a=='{' && b=='}')
	{
		return 1;
	}
	else if(a=='[' && b==']')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool balanced(char e[])
{
	int i=0;
	int z;
	int fla=0;
	for(i=0;i<strlen(e);i++)
	{
		if(e[i]=='(' || e[i]=='{' || e[i]=='[')
		{
			push(&top,e[i]);
			continue;
		}
		if(e[i]==')'||e[i]=='}'||e[i]==']')
		{
			z=pop(&top);
			if ((e[i] == ')' && z != '(') || z == -1 ||(e[i] == '}' && z != '{') ||(e[i] == ']' && z != '['))
			{
                fla = 1;
                break;
            }
		}
		i++;
	}
	if(fla==1||top!=NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/*
int main()
{
	char a[100];
	printf("Enter the Expression: \n");
	scanf("%s",&a);
	if(balanced(a))
	{
		printf("Balanced");
	}
	else
	{
		printf("Not balanced");
	}
}*/
