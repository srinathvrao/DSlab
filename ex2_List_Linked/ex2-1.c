#include "ex2-c.c"

int main(){
	
	int choice = -1;
	
	while(choice!=0){
		printf("\n----------\n1. MakeEmpty\n2. GetLength\n3. GetNextItem");
		printf("\n4. InsertFirst\n5. InsertKth\n6. InsertLast");
		printf("\n7. FindKth\n8. Find\n9. DeleteFirst");
		printf("\n10. DeleteMiddle\n11. DeleteLast\n12. PrintList");
		printf("\n0. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 0: ;break;
			case 1: MakeEmpty();break;
			case 2: GetLength();break;
			case 3: GetNextItem();break;
			case 4: InsertFirst();break;
			case 5: InsertKth();break;
			case 6: InsertLast();break;
			case 7: FindKth();break;
			case 8: Find();break;
			case 9: DeleteFirst();break;
			case 10: DeleteMiddle();break;
			case 11: DeleteLast();break;
			case 12: PrintList();break;
			default: printf("\nInvalid choice\n");
		}
	}
	return 0;
}
