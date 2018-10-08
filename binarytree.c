#include<stdio.h>
#include<stdlib.h>
struct tree
{
 int info;
 struct tree *left;
 struct tree *right;
};
 
struct tree *insert(struct tree *root, int x)
{
 if(!root)
  {
    root=(struct tree*)malloc(sizeof(struct tree));
    root->info = x;
    root->left = NULL;
    root->right = NULL;
    return(root);
  }
  if(root->info > x)
     root->left = insert(root->left,x);
  else
   {
     if(root->info < x)
root->right = insert(root->right,x);
   }
   return(root);
 }
 
 
 void inorder(struct tree *root)
 {
    if(root != NULL)
   {
     inorder(root->left);
     printf(" %d",root->info);
     inorder(root->right);
   }
   return;
 }
 
 void postorder(struct tree *root)
 {
    if(root != NULL)
   {
     postorder(root->left);
     postorder(root->right);
     printf(" %d",root->info);
   }
   return;
 }
 
 void preorder(struct tree *root)
 {
    if(root != NULL)
   {
     printf(" %d",root->info);
     preorder(root->left);
     preorder(root->right);
   }
   return;
 }
 
 /* FUNCTION TO DELETE A NODE FROM A BINARY TREE */
 struct tree *delet(struct tree *ptr,int x)
 {
  struct tree *p1,*p2;
  if(!ptr)
  {
    printf("\n Node not found ");
    return(ptr);
  }
  else
  {
     if(ptr->info < x)
     {
      ptr->right = delet(ptr->right,x);
      /*return(ptr);*/
     }
     else if (ptr->info >x)
      {
       ptr->left=delet(ptr->left,x);
       return ptr;
      }
      else                     /* no. 2 else */
       {
if(ptr->info == x)    /* no. 2 if */
{
 if(ptr->left == ptr->right) /*i.e., a leaf node*/
  {
   free(ptr);
   return(NULL);
  }
 else if(ptr->left==NULL)  /* a right subtree */
{
  p1=ptr->right;
 free(ptr);
 return p1;
}
else if(ptr->right==NULL)   /* a left subtree */
{
p1=ptr->left;
free(ptr);
return p1;
}
else
{
 p1=ptr->right;
 p2=ptr->right;
while(p1->left != NULL)
   p1=p1->left;
p1->left=ptr->left;
free(ptr);
return p2;
}
      }/*end of no. 2 if */
     }/* end of no. 2 else */
}
  return(ptr);
}

struct tree *search(struct tree *root)
{
 int no,i,ino;
 struct tree *ptr;
 ptr=root;
 printf("\n Enter the element to be searched :");
 scanf(" %d",&no);
 fflush(stdin);
 while(ptr)
 {
  if(no>ptr->info)
     ptr=ptr->right;
  else if(no<ptr->info)
     ptr=ptr->left;
  else
     break;
 }
 if(ptr)
 {
  printf("\n Element %d which was searched is found and is = %d",no,ptr->info);
}
}

void printGivenLevel(struct tree* q, int level) 
{ 
    if (q == NULL) 
        return; 
    if (level == 1) 
        printf("%d ", q->info);
    else if (level > 1) 
    { 
        printGivenLevel(q->left, level-1); 
        printGivenLevel(q->right, level-1); 
    } 
} 

void printLevelOrder(struct tree* q) 
{ 
    int h = maxDepth(q); 
    int i;
    for (i=1; i<=h; i++) 
     {
     	printf("level:%d\t",i);
		   printGivenLevel(q, i); 
        printf("\n");
    }
} 

int getLeafCount(struct tree* node) 
{ 
  if(node == NULL)        
    return 0; 
  if(node->left == NULL && node->right==NULL)       
    return 1;             
  else 
    return getLeafCount(node->left)+ 
           getLeafCount(node->right);       
}

int maxDepth(struct tree *q)  
{ 
   if (q==NULL)  
       return 0; 
   else 
   { 
       int lDepth = maxDepth(q->left); 
       int rDepth = maxDepth(q->right); 
  
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else 
	   	return(rDepth+1); 
   } 
}
 
  
int main(void)
{
 
 struct tree *root;
 int choice,h, item,item_no;
 root = NULL;
 do
 {
  do
  {
  	printf("\n\t\tOptions.......");
   printf("\n1. Insert");
   printf("\n2. Delete");
   printf("\n3. Inorder traversal");
   printf("\n4. Postorder traversal");
   printf("\n5. Preorder traversal");
   printf("\n6. Levelorder traversal");
   printf("\n7. Search");
   printf("\n8. Leaf Count");
   printf("\n9. Height");
   printf("\n10. Exit ");
   printf("\tEnter choice : ");
   scanf(" %d",&choice);
   if(choice<1 || choice>10)
      printf("\n Invalid choice - try again");
  }while (choice<1 || choice>10);
  switch(choice)
  {
   case 1:
  printf("\n Enter new element: ");
  scanf("%d", &item);
  root= insert(root,item);
  printf("\nInserted");
  break;
   case 2:
 printf("\n Enter the element to be deleted : ");
 scanf(" %d",&item_no);
 root=delet(root,item_no);
  break;
   case 3:
 printf("\n Inorder traversal of binary tree is : ");
 inorder(root);
 break;
   case 4:
 printf("\n Postorder traversal of binary tree is : ");
 postorder(root);
 break;
   case 5:
 printf("\n Preorder traversal of binary tree is : ");
 preorder(root);
 break;
   case 7:
 printf("\n Search and replace operation in binary tree ");
 root=search(root);
 break;
	case 6:
		printf("\nLevelorder transversal of binary tree  \n");
		printLevelOrder(root);
		break;
	case 8:
		h = getLeafCount(root);
		printf("\nNo. of leafs: %d",h);
		break;
	case 9:
		h = maxDepth(root);
		printf("\nHeight:%d",h);
		break;
   default:
  printf("\n End of program ");
   } /* end of switch */
  }while(choice !=10);
 return(0);
}
