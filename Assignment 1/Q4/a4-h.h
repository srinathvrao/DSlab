#include <stdio.h>

struct node{
	int data;
	struct node *next;
} *p,*q,*r, *s, *START1=NULL, *START2=NULL,
*START = NULL;

typedef struct node Node;

void merge();
void populatell();
void printll();
void insertmain();
