struct node{
	int data;
	struct node*left;
	struct node*right;
};

void insert(struct node*,struct node*);
int leafnode(struct node*);


void insert(struct node*root,struct node*nn){
	char ch;
		printf("\nWhere to insert left(l)/right(r)  ");
		ch=getche();
		if((ch=='r')  || (ch=='R')){
			if(root->right==NULL){
				root->right=nn;
			}
			else{
				insert(root->right,nn);
			}
		}
		else if((ch=='l')  || (ch=='L')){
			if(root->left==NULL){
				root->left=nn;
			}
			else{
				insert(root->left,nn);
			}
		}
		else{
			printf("\nEnter valid choice");
		}
		
		
}

int leafnode(struct node* root){
	if(isempty(root)){
		return 0;
	}
	else if(root->left==NULL && root->right==NULL ){
		return 1;
	}
	else{
		return (leafnode(root->left)+leafnode(root->right));
	}
}




