#include "ex4-c.c"

int main(){
	
	int choice=-1;
	while(choice!=0){	
		printf("\nMENU:\n1. CreateStack\n2. DisposeStack\n3. Push\n4. Pop\n5. Top\n6. IsEmpty\n7. IsFull\n8. Print\n0. Exit\n");
		scanf("%d",&choice);
		switch(choice){

			case 1: CreateStack(); break;
			case 2: DisposeStack(); break;
			case 3: Push(); break;
			case 4: Pop(); break;
			case 5: Top(); break;
			case 6: IsEmpty(); break;
			case 7: IsFull(); break;
			case 8: Print(); break;
			case 0: ; break;
			default: printf("\nINVALID CHOICE\n");

		}
	}
	
	return 0;
}
