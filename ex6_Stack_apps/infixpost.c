#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max1 20

char stack[max1];
int top3=-1;
char temp;

void push3(char i)
{
	top3++;
	stack[top3]=i;
}

char pop3()
{
	if (top3==-1)
	{
		return -1;
	}
	else
	{
		temp=stack[top3];
		top3--;
		return temp;
	}
}

int priority(char i)
{
	if(i=='*'||i=='/')
	{
		return 2;
	}
	if(i=='+'||i=='-')
	{
		return 1;
	}
	if(i=='(')
	{
		return 0;
	}
}

void eval3(char *e)
{
	char x;
	while( *e != '\0')
    {
        if(isdigit(*e)||isalpha(*e))
        {
            printf("%c",*e);
        }
        else if(*e == '(')
        {
			push3(*e);
        }
        else if(*e == ')')
        {
            while((x = pop3()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top3]) >= priority(*e))
                printf("%c",pop3());
            push3(*e);
        }
        e++;
    }
    while(top3 != -1)
    {
        printf("%c",pop3());
    }
}
/*
int main()
{
	char a[100],*p;
	printf("Enter the expression:  ");
	scanf("%s",&a);
	p=a;
	printf("Infix expression: ");
	puts(a);
	printf("Post fix expression: ");
	eval3(p);
}*/
