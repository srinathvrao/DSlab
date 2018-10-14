#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#define size 30
struct node
{
	char data;
	struct node *left;
	struct node *right;
};
struct node *stack[size];
int top;
struct node *pop();
void push(struct node *temp);
struct node *create(char exp[])
{
	struct node *temp;
	int pos=0;
	char ch;
	ch=exp[pos];
	while(ch!='\0')
	{
		temp=malloc(sizeof(struct node));
		temp->left=temp->right=NULL;
		temp->data=ch;
		if(isalpha(ch))
		push(temp);
		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		{
			temp->right=pop();
			temp->left=pop();
			push(temp);
		}
		else 
		printf("invalid character in expression");
		pos++;
		ch=exp[pos];
	}
	temp=pop();
	return temp;
}
void push(struct node *temp)
{
	if(top>=size-1)
	{
	printf("error");
	return;}
	top=top+1;
	stack[top]=temp;//check this
}
struct node *pop()
{
	struct node *temp;
	if(top==-1)
	{
	printf("empty stack cannot delete elements");
	return;}
	temp=stack[top];
	top--;
	return temp;
}
void display(struct node *root)
{
	struct node *temp = root;
	if(temp!=NULL)
	{
		display(temp->left);
		printf("%c",temp->data);
		display(temp->right);
	}	
}
void main()
{
	struct node *root;
	char exp[80];
	struct node *create(char exp[80]);
	void display(struct node *root);
	
	printf("enter the postfix expression:");
	scanf("%s",exp);
	top=-1;
	root=create(exp);
	printf("tree is created:");
	display(root);
	getch();
	
}
