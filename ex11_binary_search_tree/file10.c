#include"header10.h"
int size=0;
void create()
{
    top=NULL;
    printf("\n Tree created");
}
void checkandinsert(int x,struct node*n,struct node*m)
{
    int ch=0,flag=1;
    while(ch==0)
    {
    if(x<m->data)
    {
       if(m->left==NULL)
       {
           m->left=n;
           ch=1;
           printf("\n Node inserted");
       }
       else
       {
       	flag++;
       	m=m->left;
       }
    }
    else if(x>m->data)
    {
        if(m->right==NULL)
        {
            m->right=n;
            ch=1;
            printf("\n Node inserted");
        }
        
        else
        {
        	flag++;
        	m=m->right;
        }
    }
    else
    break;
    p->level=flag;
    }
}

void insert(int m)
{
	temp = (struct node*)malloc(sizeof(struct node));
	parent = (struct node*)malloc(sizeof(struct node));
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;
    p->data=m;
    if(top==NULL)
    {
    top=p;  
    size++;
    top->level=0;
    }
    else
    {
      checkandinsert(m,p,top);
      size++;
    }
}

void isempty()
{
    if(top==NULL)
        printf("\n Tree is empty");
    else
        printf("\n Tree has elements");
}
void treesize()
{
    printf("\n The binary tree has %d elements",size);
}
int search(int x,struct node*g)
{
	temp=NULL;
 if(g!=NULL)
 {
 if(x==g->data)
 {
 	temp=g;
 	return 1;
 }
 else
 {
 	parent = g;
    if(x<=g->data)
    {
        search(x,g->left);
    }
    else
        search(x,g->right);
 }
 }
 else
 return 0;
}
int findmin()
{
    p=top;
    while(p->left!=NULL)
    {
        p=p->left;
    }
    return p->data;
}
int findmax()
{
    p=top;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    return p->data;
}

void printorder(struct node*p,struct node*q)
{   
    int a,b;
    a=p->data;
    b=q->data;
    if(p==NULL&&q==NULL)
    ;
    else
    {
    printf("%d->%d",a,b);
    printf("\n");
    printorder(p->left,p->right);
    printf(" ");
    printorder(q->left,q->right);
    }

}
void inorder(struct node*ro)
{
    if(ro!=NULL)
    {
 inorder(ro->left);
 printf("%d \t ",ro->data);
 inorder(ro->right);
    }
    else
    ;
}
void postorder(struct node*ro)
{
    if(ro!=NULL)
    {
    postorder(ro->left);
    postorder(ro->right);
    printf("%d \t ",ro->data);
    }
    else
    ;
}
void preorder(struct node*ro)
{
    if(ro!=NULL)
    {
    printf("%d \t ",ro->data);
    preorder(ro->left);
    preorder(ro->right);
    }
    else
    ;
}
void delete(int x)
{
	int a;
	struct node *abc,*abc1;
	abc=(struct node*)malloc(sizeof(struct node));
	abc1=(struct node*)malloc(sizeof(struct node));
	a = search(x,top);
	if(a)
	{
		if((temp->left==NULL)&&(temp->right==NULL))
		{
			if(parent->left->data==x)
				parent->left=NULL;
			else
				parent->right=NULL;
		}
		else if((temp->left==NULL)&&(temp->right!=NULL))
		{
			if(parent->left->data==x)
				parent->left = temp->right;
			else
				parent->right=temp->right;
			temp->right->level--;
			temp=NULL;
			free(temp);
		}
		else if((temp->left!=NULL)&&(temp->right==NULL))
		{
			if(parent->left->data==x)
				parent->left = temp->left;
			else
				parent->right=temp->left;
			temp->left->level--;
			temp=NULL;
			free(temp);
		}
		else if((temp->left!=NULL)&&(temp->right!=NULL))
		{
			parent=temp;
			abc=temp->right;
			if(abc->left==NULL)
			{
				temp->data=abc->data;
				parent->right=NULL;
			}
			else
			{
				while(abc->left!=NULL)
				{
					parent=abc;
					abc=abc->left;
				}
				temp->data=abc->data;
				parent->left=abc->left;
				free(abc);	
			}
		}
	}
	else
	printf("\n Element does not exist,hence cannot be deleted!");
}
void levelorder(struct node*g)
{
	if(g!=NULL)
    {
    	printf(" \n%ds level is %d ",g->data,g->level);
 		levelorder(g->left);
 		levelorder(g->right);
    }
    else
    ;
}

