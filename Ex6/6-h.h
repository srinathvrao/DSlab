#include<stdio.h>
#include<stdlib.h>

struct node{
	char data;
	int da;
	struct node *next;
} *TOP = NULL, *p, *q, *r;

typedef struct node Node;
char y;
int z;
void Push(char);
void Push2(int);
char Pop();
void postf();
void DisposeStack();
