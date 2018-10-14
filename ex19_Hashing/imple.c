#include "header.h"
void insert_sep(int x)
{
	int i;
	temp=(struct hash*)malloc(sizeof(struct hash));
	temp->data=x;
	temp->next=NULL;
	i = x%7;
	if(A[i]==NULL)
	{
		A[i]=temp;
	}
	else
	{
		q = A[i];
		while(q->next!=NULL)
		q=q->next;
		q->next = temp;
	}
}
void insert_lin(int x)
{
	int a[7]={-999,-999,-999,-999,-999,-999,-999};
	int i;
	i=0;
	i = x%7;
	if(a[i]==-999)
	a[i] = x;
	else
	{
		while(a[i]!=-999)
		{
			if(i>6)
			i%=7;
			else
			i++;
		}
	}
	a[i] = x;
}
void insert_quad(int x)
{
	int a[7]={-999,-999,-999,-999,-999,-999,-999};
	int i,flag=1,z=1;
	i=0;
	i = x%7;
	if(a[i]==-999)
	a[i] = x;
	else
	{
		while(a[i]!=-999)
		{
			i=x%7;
			z=(flag*flag);
			flag++;
			i+=z;
			if(i>=7)
			i%=7;
		}
	}
	a[i] = x;
}
void display_prob()
{
	int i;
	for(i=0;i<7;i++)
	if(a[i]==-999)
	printf("0 \t");
	else
	printf("%d \t",a[i]);
}
void display_sep()
{
	int i;
	for(i =0;i<7;i++)
	{
		printf(" \n %d",i);
		q = A[i];
		while(q!=NULL)
		{
			printf(" -> %d",q->data);
			q = q->next;
		}
	}
}

