#include<stdio.h>

void linear(int a[],int n,int e){
	int i;
	int flag=0;
	for(i=0;i<n;i++){
		if(a[i]==e){	
			printf("the element is found at the position:%d",i);
			flag=1;
		}
	}
	if(flag!=1){
	printf("the given element is not in the array :(");	
	}
}
