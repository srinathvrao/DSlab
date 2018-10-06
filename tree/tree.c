#include "tree-c.c"

int main(){
	
	int no, choice = -1;
	while(choice!=0){
		printf("\n==========\n1. CreateTree\n2. Insert\n3. Display\n4. Size\n5. CountLeaf\n6. Height\n7. LOTraverse\n8. PreTraverse\n9. POsTraverse\n10. INOTraverse\n11. Delete\n0. Exit\nchoice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: 
				ROOT = CreateTree();
				break;
			case 2: 
				printf("\nEnter number to insert: ");
				scanf("%d",&no);
				Insert(ROOT,no);
				break;
			case 3:
				display(ROOT);
				break;
			case 4:
				printf("\nNumber of nodes in tree: %d\n",size(ROOT));
				break;
			case 5: printf("\nNumber of leaves in tree: %d\n",CountLeaf(ROOT));
				break;
			case 11:
				printf("\nEnter number to be deleted: \n");
				scanf("%d",&no);
				Delete(ROOT,no);
				break;
//			case 6:
//				printf("\nHeight of tree: %d\n",height(ROOT));
//				break;
		}
	}
	
	return 0;
}
