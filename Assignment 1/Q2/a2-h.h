#include <stdio.h>

struct node{
	int data;
	struct node *next;
} *START = NULL, *p,*q,*r;

typedef struct node Node;

void populatell();
void deleteconsec();
void printll();
