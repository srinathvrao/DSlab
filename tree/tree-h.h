#include<stdio.h>

struct node{
	int data, isVisited;
	struct node *left, *right;	
};
typedef struct node Node;

Node *CreateTree();
void Insert(Node *, int);
int CountLeaf(Node *);
void display(Node *);
int size(Node *);
int height(Node *);
void Delete(Node *,int);
void migrate(Node *);
Node *ROOT;

