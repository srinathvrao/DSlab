#include "AVLh.h"
int height(struct Node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return N->height; 
} 
// A utility function to get maximum of two integers 
int max(int a, int b) 
{ 
    return (a > b)? a : b; 
}   
/* Helper function that allocates a new node with the given key and 
    NULL left and right pointers. */
struct Node* newNode(char n[]) 
{ 
    struct Node* node = (struct Node*) 
                        malloc(sizeof(struct Node)); 
    strcpy(node->name,n);
    node->left   = NULL; 
    node->right  = NULL; 
    node->height = 1;  // new node is initially added at leaf 
    return(node); 
} 
// A utility function to right rotate subtree rooted with y 
// See the diagram given above. 
struct Node *rightRotate(struct Node *y) 
{ 
    struct Node *x = y->left; 
    struct Node *T2 = x->right; 
  
    // Perform rotation 
    x->right = y; 
    y->left = T2; 
  
    // Update heights 
    y->height = max(height(y->left), height(y->right))+1; 
    x->height = max(height(x->left), height(x->right))+1; 
  
    // Return new root 
    return x; 
} 
  
// A utility function to left rotate subtree rooted with x 
// See the diagram given above. 
struct Node *leftRotate(struct Node *x) 
{ 
    struct Node *y = x->right; 
    struct Node *T2 = y->left; 
  
    // Perform rotation 
    y->left = x; 
    x->right = T2; 
  
    //  Update heights 
    x->height = max(height(x->left), height(x->right))+1; 
    y->height = max(height(y->left), height(y->right))+1; 
  
    // Return new root 
    return y; 
} 
  
// Get Balance factor of node N 
int getBalance(struct Node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return height(N->left) - height(N->right); 
} 
  
// Recursive function to insert a key in the subtree rooted 
// with node and returns the new root of the subtree. 
struct Node* insert(struct Node* node, char n[]) 
{ 
    /* 1.  Perform the normal BST insertion */
    if (node == NULL) 
        return(newNode(n)); 
  
    if (strcmp(n,node->name)<0) 
        node->left = insert(node->left,n); 
    else if (strcmp(n,node->name)>0) 
        node->right = insert(node->right,n); 
    else // Equal keys are not allowed in BST 
        return node; 
  
    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left), 
                           height(node->right)); 
  
    /* 3. Get the balance factor of this ancestor 
          node to check whether this node became 
          unbalanced */
    int balance = getBalance(node); 
  
    // If this node becomes unbalanced, then 
    // there are 4 cases 
  
    // Left Left Case 
    if (balance > 1 && strcmp(n,node->left->name)<0) 
        return rightRotate(node); 
  
    // Right Right Case 
    if (balance < -1 && strcmp(n,node->right->name)>0) 
        return leftRotate(node); 
  
    // Left Right Case 
    if (balance > 1 && strcmp(n,node->left->name)>0) 
    { 
        node->left =  leftRotate(node->left); 
        return rightRotate(node); 
    } 
  
    // Right Left Case 
    if (balance < -1 && strcmp(n,node->right->name)<0) 
    { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 
  
    /* return the (unchanged) node pointer */
    return node; 
} 
  
struct Node * minValueNode(struct Node* node) 
{ 
    struct Node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  
  struct Node * maxValueNode(struct Node* node) 
{ 
    struct Node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->right != NULL) 
        current = current->right; 
  
    return current; 
} 
  
int minValueNode1(struct Node* node) 
{ 
    struct Node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) 
        current = current->left; 
  
    return current->name; 
} 
  
  int maxValueNode1(struct Node* node) 
{ 
    struct Node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->right != NULL) 
        current = current->right; 
  
    return current->name; 
} 
  
  
struct Node* deleteNode(struct Node* root,char n[]) 
{ 
    // STEP 1: PERFORM STANDARD BST DELETE 
  
    if (root == NULL) 
        return root; 
  
    // If the key to be deleted is smaller than the 
    // root's key, then it lies in left subtree 
    if ( strcmp(n,root->name)<0 ) 
        root->left = deleteNode(root->left,n); 
  
    // If the key to be deleted is greater than the 
    // root's key, then it lies in right subtree 
    else if( strcmp(n,root->name)>0 ) 
        root->right = deleteNode(root->right,n); 
  
    // if key is same as root's key, then This is 
    // the node to be deleted 
    else
    { 
        // node with only one child or no child 
        if( (root->left == NULL) || (root->right == NULL) ) 
        { 
            struct Node *temp = root->left ? root->left : 
                                             root->right; 
  
            // No child case 
            if (temp == NULL) 
            { 
                temp = root; 
                root = NULL; 
            } 
            else // One child case 
             *root = *temp; // Copy the contents of 
                            // the non-empty child 
            free(temp); 
        } 
        else
        { 
            // node with two children: Get the inorder 
            // successor (smallest in the right subtree) 
            struct Node* temp = minValueNode(root->right); 
  
            // Copy the inorder successor's data to this node 
            strcpy(root->name,temp->name); 
  
            // Delete the inorder successor 
            root->right = deleteNode(root->right, temp->name); 
        } 
    } 
  
    // If the tree had only one node then return 
    if (root == NULL) 
      return root; 
  
    // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE 
    root->height = 1 + max(height(root->left), 
                           height(root->right)); 
  
    // STEP 3: GET THE BALANCE FACTOR OF THIS NODE (to 
    // check whether this node became unbalanced) 
    int balance = getBalance(root); 
  
    // If this node becomes unbalanced, then there are 4 cases 
  
    // Left Left Case 
    if (balance > 1 && getBalance(root->left) >= 0) 
        return rightRotate(root); 
  
    // Left Right Case 
    if (balance > 1 && getBalance(root->left) < 0) 
    { 
        root->left =  leftRotate(root->left); 
        return rightRotate(root); 
    } 
  
    // Right Right Case 
    if (balance < -1 && getBalance(root->right) <= 0) 
        return leftRotate(root); 
  
    // Right Left Case 
    if (balance < -1 && getBalance(root->right) > 0) 
    { 
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    } 
  
    return root; 
} 
  
  
// A utility function to print preorder traversal 
// of the tree. 
// The function also prints height of every node
void preOrder(struct Node *root) 
{ 
    if(root != NULL) 
    { 
        printf("\t%s ", root->name); 
        preOrder(root->left); 
        preOrder(root->right); 
    } 
} 

struct Node* search(char n[],struct Node *q)
{
   struct Node *current = q;
   printf("Visiting elements: ");
	
   while(strcmp(n,current->name)!=0){
	
      if(current != NULL) {
         printf("%s",current->name);
			
         if(strcmp(n,current->name)<0){
            current = current->left;
         }
         else {                
            current = current->right;
         }
			
         
         if(current == NULL){
            return NULL;
         }
      }			
   }
   
   return current;
}

void inorder(struct Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\t%s",root->name);
		inorder(root->right);
	}
}

void postorder(struct Node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\t%s",root->name);
	}
}
int maxDepth(struct Node *q)  
{ 
   if (q==NULL)  
       return 0; 
   else 
   { 
       int lDepth = maxDepth(q->left); 
       int rDepth = maxDepth(q->right); 
  
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
}
void printGivenLevel(struct Node* q, int level) 
{ 
    if (q == NULL) 
        return; 
    if (level == 1) 
        printf("%s", q->name);
    else if (level > 1) 
    { 
        printGivenLevel(q->left, level-1); 
        printf("\n");
        printGivenLevel(q->right, level-1); 
    } 
} 
void printLevelOrder(struct Node* q) 
{ 
    int h = maxDepth(q); 
    int i;
    for (i=1; i<=h; i++) 
        printGivenLevel(q, i);
        printf("\n");
}

