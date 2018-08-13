#include "jos-c.c"

int main(){
	
	scanf("%d %d",&n,&k);
	createqueue(n);
	kill();
	printf("%d survives", FRONT->person);
		
	return 0;
}
