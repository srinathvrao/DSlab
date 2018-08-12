#include <stdio.h>

struct node{
	int data;
	struct node *next;
} *START = NULL, *p,*q,*r, *s, *START1=NULL,
*START2=NULL;

typedef struct node Node;

void split();
void populatell();
void printsplits();
