struct node{
	int data;
	struct node*left;
	struct node*right;
};
void insert(struct node*,struct node*);
void search(struct node*,int);
int findmin(struct node*);
void findmax(struct node*);
struct node* deletenode(struct node*,int);

void insert(struct node*root,struct node*nn){
	if((nn->data) > (root->data)){
		if(root->right==NULL){
			root->right=nn;
		}
		else{
			insert(root->right,nn);
		}
	}
	else{
		if(root->left==NULL){
			root->left=nn;
		}
		else{
			insert(root->left,nn);
		}
	}
}

void search(struct node*root,int n){
	if(n<root->data){
		search(root->left,n);
	}
	else if(n>root->data){
		search(root->right,n);
	}
	else if(n==root->data){
		printf("\n found");
	}
	else{
		printf("\nnot found");
	}
	
}

int findmin(struct node*root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root->data;
}
void findmax(struct node*root){
	while(root->right!=NULL){
		root=root->right;
	}
	printf("\nThe maximum valude of the tree is %d",root->data);
}

struct node* deletenode(struct node *root, int data) {
	struct node*temp;
  if (root == NULL) {
     return NULL;
  }
  if (data < root->data) {  
      root->left = deletenode(root->left, data);
  } 
  else if (data > root->data) { 
      root->right = deletenode(root->right, data);
  } 
  else {
     if (root->left == NULL && root->right == NULL) {
        free(root);
        root = NULL;
     }
     else if (root->left == NULL) {
        temp = root; 
        root = root->right;
        free (temp);
     }
     else if (root->right == NULL) {
        temp = root; 
        root = root->left;
        free (temp);
     }
    else {
        temp = findmin(root->right); 
		root->data = temp->data;
        root->right = deletenode(root->right, temp->data); 
     }
  }
  return root; 
}

