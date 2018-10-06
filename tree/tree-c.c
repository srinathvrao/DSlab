#include "tree-h.h"

Node *CreateTree(){
	Node *abc = (Node *) malloc(sizeof(Node));
	abc->data = -100;
	abc->left = NULL;
	abc->right = NULL;
	return abc;
}

void Insert(Node *x, int y){
	if(x!=NULL && x->data==-100){
		x->data = y;
		x->left = CreateTree();
		x->right = CreateTree();
	}
	else if(x==NULL){
		Node *a = (Node *) malloc(sizeof(Node));
		a->data = y;
		a->left = CreateTree();
		a->right = CreateTree();
		x = a;
	}
	else{
		if(y < x->data)
			Insert(x->left,y);
		else
			Insert(x->right,y);
		
	}
}

int CountLeaf(Node *x){
	if(x->data!=-100 && (x->right)->data==-100 && (x->left)->data==-100)
		return 1;
	else
		return CountLeaf(x->left) + CountLeaf(x->right);
}

int size(Node *x){
	if(x->data!=-100 && (x->right)->data==-100 && (x->left)->data==-100)
		return 1;
	else
		return 1 + size(x->left) + size(x->right);
}

int height(Node *x){
	if(x->data!=-100 && (x->right)->data==-100 && (x->left)->data==-100)
		return 1;
	else
		return 1 + size(x->left) + size(x->right);
}

void Delete(Node *x, int y){
	if(x->data!=-100 && (x->right)->data==-100 && (x->left)->data==-100)
		printf("\nLeaf reached22: %d\n",x->data);
	else{
		if(x->data==y){
			x->data = -100;
			printf("\n testing right %d before\n",x->right->data);
			if(x->left->data!=-100){
				printf("\nMoving %d \n",x->left->data);
				migrate(x->left);
			}
			else{
				free(x->left);
				x->left=NULL;
			}
			printf("\n testing right %d after \n",x->right->data);
			if(x->right->data!=-100){
				printf("\nMoving %d too\n",x->right->data);
				migrate(x->right);	
			}
			else{
				free(x->right);
				x->right = NULL;
			}
			x->left = CreateTree();
			x->right = CreateTree();
		}
		else{
			if(x->left->data!=-100) Delete(x->left,y);
			if(x->right->data!=-100) Delete(x->right,y);	
		}
		
	}
}

void migrate(Node *x){
	printf("\nMoving around %d\n",x->data);
	Insert(ROOT,x->data);
	if((x->left)->data!=-100)
		migrate(x->left);
	else{
		printf("\nFreeing left of %d \n",x->data);
		free(x->left);
		x->left=NULL;
	}
	if((x->right)->data!=-100)
		migrate(x->right);
	else{
		printf("\nFreeing right of %d \n",x->data);
		free(x->right);
		x->right = NULL;
	}
	free(x);//end of migration.
	x=NULL;
}

void display(Node *x){
	if(x->data!=-100 && (x->right)->data==-100 && (x->left)->data==-100)
		printf("\nLeaf reached: %d\n",x->data);
	else{
		printf(" %d ", x->data);
		if(x->left->data!=-100) display(x->left);
		if(x->right->data!=-100) display(x->right);
	}
}
