#include "7-c.c"

int main(){
	
	int ch=-1;
	while(ch!=0){
		printf("\n--------\n1. CreateQueue\n2. DisposeQueue\n3. IsEmpty\n4. IsFull\n5. Enqueue\n");
		printf("6. Dequeue\n7. FrontAndRear\n8. DisplayQueue\n0. Exit\n");
		printf("choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: CreateQueue(); break;
			case 2: DisposeQueue(); break;
			case 3: IsEmpty(); break;
			case 4: IsFull(); break;
			case 5: Enqueue(); break;
			case 6: Dequeue(); break;
			case 7: FrontAndRear(); break;
			case 8: DisplayQueue(); break;
			case 0: break;
		}
	}
	
	return 0;
}
