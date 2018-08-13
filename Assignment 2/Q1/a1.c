#include "a1-c.c"

int main(){
	
	int a;
	printf("Enter integer in decimal:\n");
	scanf("%d",&a);
	calc(a);
	printf("In binary:\n");
	PrintStack();
	
	return 0;
}
