#include "first.h"

int CreateTree(){
	root = (Node *)(malloc(sizeof(Node)));
	root->data = 0;
	root->right = NULL;
	root->left = NULL;
	if(sizeof(root)==sizeof(Node))
		return 1;
	else
		return 0;
}

hello world!

int Insert(Node *xyz, int y){
	if(xyz!=NULL){
		if(y < xyz->data)
			xyz = xyz->left;
		else
			xyz = xyz->right;
		Insert(xyz,y);
	}
	else{
		Node *abc = (Node *)(malloc(sizeof(Node)));
		abc->data = y;
		abc->right = NULL;
		abc->left = NULL;
		xyz = abc;
	}
	return 1;
}

int CountLeaf(Node *x){
	if(x==NULL)
		return 1;
	else{
		printf("%d %d", x->left->data, x->right->data);
		return (CountLeaf(x->left) + CountLeaf(x->right));
	}
		
}
