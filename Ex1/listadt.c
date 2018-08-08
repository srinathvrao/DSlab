#include"listfunctions.c"

int main(){

	
	int choice=-1;
	while(choice!=0){	
		printf("\nMENU:\n1. isfull\n2. isempty\n3. insert at beginning\n4. insert at position\n5. insert at end\n6. delete\n7. find\n8. print list\n9. element at position\n0. exit\n");
		scanf("%d",&choice);
		switch(choice){

			case 1: isfull(); break;
			case 2: isempty(); break;
			case 3: insertbeg(); break;
			case 4: insertpos(); break;
			case 5: insertend(); break;
			case 6: del(); break;
			case 7: findk(); break;
			case 8: print(); break;
			case 9: elementat(); break;
			case 0: ; break;
			default: printf("\nINVALID CHOICE\n");

		}
	}

	return 0;
}



