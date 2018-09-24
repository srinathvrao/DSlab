#include "6-c.c"

int main(){
	
	int ch=-1;
	while(ch!=0){
		printf("\n---------\n1. Balance expression\n2. Evaluate Postfix\n3. infix to postfix\n0. Exit\nchoice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: bal();break;
			case 2: postf();break;
			case 3: inftopost();break;
			case 0: break;
		}
	}
	
	return 0;
}
