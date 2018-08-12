#include <stdio.h>

struct node{
	int person;
	struct node *next;
} *FRONT = NULL, *p,*q,*r, *REAR;

typedef struct node Node;
int k,n;
void insertintoqueue();
void PrintQueue();
void kill();
void createqueue(int);
