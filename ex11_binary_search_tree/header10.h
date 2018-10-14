#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*left;
	struct node*right;
	int level;
}*top,*p,*q,*r,*root,*parent,*temp;
void create();
void checkandinsert(int,struct node*,struct node*);
void insert(int);
void isempty();
void treesize();
int search(int,struct node*);
int findmin();
int findmax();
void printorder(struct node*,struct node*);
void inorder(struct node*);
void postorder(struct node*);
void preorder(struct node*);
void delete(int);
void levelorder(struct node*);
