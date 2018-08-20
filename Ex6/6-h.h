#include<stdio.h>

struct node{
	char data;
	struct node *next;
} *TOP = NULL, *p, *q, *r;

typedef struct node Node;
char y;
void Push(char);
char Pop();
