#include <stdio.h>

struct node{
	int data;
	struct node *next;
} *START = NULL, *p,*q, *r, *START2 = NULL;

typedef struct node Node;

void populatell();
void reversell();
void Printll();
void Deletell();
