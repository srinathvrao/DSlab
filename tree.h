void create(struct node*,struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void levelorder(struct node*);
void printlevel(struct node*,int);
int height(struct node*);
int isempty(struct node*);
int size(struct node*);
struct node*getnode();

struct node*getnode(){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void create(struct node*root,struct node*nn){
	root=nn;
}

void inorder(struct node*root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node*root){
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node*root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

void levelorder(struct node*root){
	int i,h;
	h=height(root);
	for(i=1;i<=h;i++){
		printlevel(root,i);
	}
}

void printlevel(struct node*root,int count){
	if(count == 1){
		printf("%d ",root->data);
	}
	/*else if(root->left!=NULL){
		printlevel(root->left,count-1);
	}
	else if(root->right!=NULL){
		printlevel(root->right,count-1);
	}*/
	else if(count >1){
			printlevel(root->left,count-1);
			printlevel(root->right,count-1);
	}
}

int height(struct node*root){
	int rheight,lheight;
	if(root==NULL){
		return 0;
	}
	lheight=height(root->left);
	rheight=height(root->right);
	if(lheight>rheight){
		return lheight+1;
	}
	else{
		return rheight+1;
	}
}

int size(struct node*root){
	if(isempty(root)){
		return 0;
	}
	else{
		return (size(root->left)+1+size(root->right));
	}
}

int isempty(struct node*root){
	if(root==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

