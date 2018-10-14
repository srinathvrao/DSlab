#include"binaryheader.h"

int isempty(struct node *temp)
{
	if(temp==NULL)
	{
		//printf("\n Binary tree is empty.\n");
		return 1;
	}
	 return 0;
}

struct node* create_tree()
{
	struct node *temp1=(struct node*)malloc(sizeof(struct node)); 
	//temp1=NULL;
	//temp->data=0;
	//temp->left=temp->right=NULL;
	printf("\n ***Binary tree created***\n");
	return temp1;
}

struct node* ins_node(struct node *temp, int newdata)
{
	int flag=0,choice;
	struct node *newnode=(struct node*)malloc(sizeof(struct node)); 
	newnode->data= newdata;
	newnode->left=NULL;
	newnode->right=NULL;
	if(isempty(temp))
	{
		temp=newnode;
		count=1;
	}
	else
	{
		q=temp;
		while(!isempty(q))
		{
			printf("\n do you wanna insert in the left subtree or right subtree? choice 1 or 2 : ");
			scanf("%d",&choice);
			if(choice==1)
			{
				if(q->left==NULL)
				{
					q->left=newnode;
					count++;
					break;
				}
				else
				{
					q=q->left;
				}
			}
			if(choice==2)
			{
				if(q->right==NULL)
				{
					q->right=newnode;
					count++;
					break;
				}
				else
				{
					q=q->right;
				}
			}
		}
	}
	printf("\n element inserted into the tree.\n");
	return temp;
}

void count_leaf(struct node *temp)
{
	if(!isempty(temp))
	{
		if(temp->left==NULL && temp->right==NULL)
		{
			leaf_count++;
		}
		count_leaf(temp->left);
		count_leaf(temp->right);
	}
}

/*void height_tree(struct node *temp)
{
	if(!isempty(temp))
	{
		
	}
}*/

void preorder(struct node *temp)
{
	if(!isempty(temp))
	{
		printf(" %d ",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}

void postorder(struct node *temp)
{
	if(!isempty(temp))
	{
		postorder(temp->left);
		postorder(temp->right);
		printf(" %d ",temp->data);
	}
}

void inorder(struct node *temp)
{
	if(!isempty(temp))
	{
		inorder(temp->left);
		printf(" %d ",temp->data);
		inorder(temp->right);
	}
}

void levelorder(struct node *temp,int level)
{
	if(!isempty(temp))
	{
		if(level==1)
		{
			printf("%d",temp->data);
		}
		else if(level>1)
		{
			levelorder(temp->left,level-1);
			levelorder(temp->right,level-1);
		}
	}
}
