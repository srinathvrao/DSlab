#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20

char a[max];
	int top2=-1,temp2;

void push2(int j)
{
	if(top2==max-1)
	{
		printf("\nStack is full\n");
	}
	else
	{
		top2++;
		a[top2]=j;
	}
}

int pop2()
{
	int temp2;
	if(top2<0)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		temp2=a[top2];
		top2--;
	}
	return temp2;
}


void eval(char e[],int n)
{
	int i=0;
	char c;
	int val;
	for(i=0;i<n;i++)
	{
		c=e[i];
		if(isdigit(c))
		{
			push2(c-'0');
		}
		else if(c=='+'||c=='-'||c=='*'||c=='/')
		{
			int q = pop2();
			int p = pop2();
			switch(c)
			{
				case '+':
					val=p+q;
					break;
				case '-':
					val=p-q;
					break;
				case '*':
					val=p*q;
					break;
				case '/':
					val=p/q;
					break;
			}push2(val);
		}
	}
	printf("\nThe value is %d",pop2());
}
/*
int main()
{
	printf("Enter the expression: \n");
	scanf("%s",&a);
	int l =strlen(a);
	eval(a,l);
}*/
