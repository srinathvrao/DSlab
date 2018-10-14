#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL,*q;

int count=0,leaf_count=0,height;
struct node* create_tree();
struct node* ins_node(struct node*,int);
int isempty(struct node*);
void count_leaf(struct node*);
//void height_tree(struct node*);
void levelorder(struct node*,int);
void postorder(struct node*);
void preorder(struct node*);
void inorder(struct node*);


