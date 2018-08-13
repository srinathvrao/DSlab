#include <stdio.h>

struct node{
	int data;
	struct node *next;
} *TOP = NULL, *p,*q,*r;

typedef struct node Node;

void calc(int);
void Push(int);
void PrintStack();
