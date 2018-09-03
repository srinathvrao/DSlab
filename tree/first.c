#include "func.c"

int main(){
	int no;
	while(choice!=0){
		printf("\n--------\n1. CreateTree\n2. Insert\n3. IsEmpty\n4. Size\n5. CountLeaf\n6. Height\n7. LOTraverse\n8. PreTraverse\n9. POsTraverse\n10. INOTraverse\n0. Exit\nchoice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: if(CreateTree())
						printf("\nEmpty root node created.\n");
					else 
						printf("\nEmpty root node created.\n");
				break;
			case 2: printf("\nEnter number: ");
					scanf("%d",&no);
					// if(root!=NULL) printf("%d yo whaddup ",root->data);
					if(Insert(root,no))
						printf("\nElement inserted.\n");
					else
						printf("\nElement not inserted.\n");
				break;
			// case 3: if(IsEmpty(p))
			// 			printf("\nTree is empty.\n"); 
			// 		else
			// 			printf("\nTree is not empty.\n"); 
			// 	break;
			// case 4: printf("\nNumber of nodes in tree: %d\n",Size(p));
			// 	break;
		 	case 5: printf("\nLeaf count: %d\n",CountLeaf(root)); break;
			case 6: break;
			case 7: break;
			case 8: break;
			case 9: break;
			case 0: break;
			default: printf("%s\n", "Invalid choice.");
		}
	}

	return 0;
}