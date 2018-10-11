#include <stdlib.h>
#include <stdio.h>
#include "bt.h"
#include "tree.h"

int main(){
	int choice,h,s,lf;
	char ans='n';
	struct node*root,*nn;
	root=NULL;
	printf("BINARY TREE ");
	do{
		printf("\n 1.create \n 2.insert \n 3.inorder \n 4.preorder \n 5.postorder \n 6.levelorder \n 7.height of the tree \n 8.size \n 9.count leaf nodes \n 10.isempty \n Enter your choice ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(isempty(root)){
					nn=getnode();
					printf("\nEnter the data ");
					scanf("%d",&nn->data);
					root=nn;
				}
				else{
					printf("\n Root already exists ");
				}
				break;
			case 2:
				if(root!=NULL){
					nn=getnode();
					printf("\nEnter the data ");
					scanf("%d",&nn->data);
					insert(root,nn);
				}
				else{
					printf("\nTree is empty ");
				}
				break;
			case 3:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nInorder traversal of the tree is \n");
					inorder(root);
				}
				break;
			case 4:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nPreorder traversal of the tree is \n");
					preorder(root);
				}
				break;
			case 5:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nPostorder traversal of the tree is \n");
					postorder(root);
				}
				break;
			case 6:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe level order traversal of the tree is \n");
					levelorder(root);
				}
				break;
			case 7:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					h=height(root);
					printf("\nThe height of the tree is %d",h);
				}
				break;
			case 8:
				s=size(root);
				printf("The size of tree is %d",s);
				break;
			case 9:
				lf=leafnode(root);
				printf("The number of leaf nodes are %d",leafnode(root));
				break;	
			case 10:
				if(isempty(root)){
					printf("Tree is empty");
				}
				else{
					printf("Tree is not empty");
				}
				break;
			default:
				exit(0);
				
		}
	}while(choice!=0);
	
}


