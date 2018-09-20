#include <stdio.h>

struct node{
	int data;
	struct node *left;
	struct node *right;	
} *root;

typedef struct node Node;
int choice = -1;
Node *p, *q, *xyz;
int CreateTree();
int Insert(Node *,int);
int IsEmpty(Node *);
int Size(Node *);
int CountLeaf(Node *);
int Height(Node *);
void LOTraverse(Node *);
void POTraverse(Node *);
void PreTraverse(Node *);
void INOTraverse(Node *);