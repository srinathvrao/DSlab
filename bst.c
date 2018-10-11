#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "tree.h"

int main(){
	int ch=0,h,n,a;
	struct node*root,*nn;
	root=NULL;
	printf("BINARY SEARCH TREE ");
	do{
		printf("\n 1.create \n 2.insert \n 3.inorder \n 4.preorder \n 5.postorder \n 6.levelorder \n 7.delete \n 8.size \n 9.search an element \n 10.find minimum \n 11.find maximum \n Enter your choice ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(root==NULL){
					nn=getnode();
					printf("\nEnter the data ");
					scanf("%d",&nn->data);
					root=nn;
				}
				else{
					printf("\nRoot already exists");
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
					printf("\nTree is empty");					
				}
				break;
			case 3:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe inorder traversal of the tree is \n");
					inorder(root);
				}
				break;
			case 4:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe preorder traversal of the tree is \n");
					preorder(root);
				}
				break;
			case 5:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe postorder traversal of the tree is \n");
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
					printf("Enter the data to be deleted ");
					scanf("%d",&a);
					struct node*NN=deletenode(root,a);
					printf("\nThe node %d is deleted ",NN->data);
				}
				break;
			case 8:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe size of the tree is %d",size(root));
				}
				break;
			case 9:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nEnter the element to search ");
					scanf("%d",&n);
					search(root,n);
				}
				break;
			case 10:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					printf("\nThe minimum value of the tree is %d",findmin(root));
				}
				break;
			case 11:
				if(isempty(root)){
					printf("\nTree is empty");
				}
				else{
					findmax(root);
				}
				break;
				
			default:
				exit(0);
				
		}		
	}while(ch!=0);
}
