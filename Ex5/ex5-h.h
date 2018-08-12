#include<stdio.h>

struct node{
	int data;
	struct node *next;
} *START, *p, *q,*r;

typedef struct node Node;

void CreateStack();
void DisposeStack();
void Push();
void Pop();
void Top();
void IsEmpty();
void Print();
