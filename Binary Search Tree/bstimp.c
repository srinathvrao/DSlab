#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*left;
	struct node*right;
	int level;
}*top,*p,*q,*r,*root,*parent,*temp;
int size=0;

void create()
{
    top=NULL;
    printf("\ntree created");
}
void checkandinsert(int x,struct node*n,struct node*m)
{
    int ch=0,flag=1;
    while(ch==0)
    {
    if(x<=m->data)
    {
       if(m->left==NULL)
       {
           m->left=n;
           ch=1;
           printf("\nnode inserted");
       }
       else
       {
       	flag++;
       	m=m->left;
       }
    }
    else
    {
        if(m->right==NULL)
        {
            m->right=n;
            ch=1;
            printf("\nnode inserted");
        }
        
        else
        {
        	flag++;
        m=m->right;
        }
    }
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
        printf("\ntree is empty");
    else
        printf("\ntree has elements");
}
void treesize()
{
    printf("\nthe binary tree has %d elements",size);
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
 printf("%d ",ro->data);
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
    printf("%d ",ro->data);
    }
    else
    ;
}
void preorder(struct node*ro)
{
    if(ro!=NULL)
    {
    printf("%d ",ro->data);
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
			free(temp);	
		}
		else if((temp->left==NULL)&&(temp->right!=NULL))
		{
			parent->right = temp->right;
			free(temp);
		}
		else if((temp->left!=NULL)&&(temp->right==NULL))
		{
			parent->left = temp->left;
			free(temp);
		}
		else if((temp->left!=NULL)&&(temp->right!=NULL))
		{
			abc1=temp;
			abc=temp->right;
			while(abc->left!=NULL)
			{
				abc1=abc;
				abc=abc->left;
			}
			temp->data=abc->data;
			abc1->left=NULL;
			free(abc);
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
void main()
{
    int ch=1,c,x;
    while(ch==1)
    {
        printf("\nTree Menu");
        printf("\n1.Create\n2.Insert\n3.isempty\n4.Search\n5.Find min\n6.Find max\n7.Printorder\n8.Inorder\n9.Preorder\n10.Postoreder\n11.treesize\n12.Delete\n13.Level Order\n14.Exit");
        printf("\nenter your choice");
        scanf("%d",&c);
        switch(c)
        {
            case 1:create();
                    break;
            case 2:printf("\nenter the element");
                    scanf("%d",&x);
                    insert(x);
                    break;
            case 3:isempty();
                    break;
            case 4:printf("\nenter the element to be searched");
                    scanf("%d",&x);
                    temp = NULL;
                    x = search(x,top);
                    if(x)
                    printf("\n Element found!");
                    else
                    printf("\n Element not found!");
                    break;
            case 5:x=findmin();
                    printf("\nmin element is %d",x);
                    break;
            case 6:x=findmax();
                    printf("\nmax element is %d",x);
                    break;
            case 7:printf("%d",top->data);
                    printf("\n");
		    printf("%d->%d",top->left->data,top->right->data);
                    printorder(top->left,top->right);
                    break;
            case 8:inorder(top);
                    break;
            case 9:preorder(top);
                    break;
            case 10:postorder(top);
                    break;
            case 14:ch=0;
                    break;
            case 11:treesize();
                    break;
            case 12:printf("\n Enter the element to be deleted:");
            		scanf("%d",&x);
            		delete(x);
            		break;
            case 13:levelorder(top);
            		break;
        }
    }
}
