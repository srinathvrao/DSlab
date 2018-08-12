#include "ex4-h.h"

void CreateStack(){
	ARRAY[0] = NULL;
	if(ARRAY[0] == NULL)
		printf("\nEmpty Stack created\n");
	else
		printf("\nError in creating empty Stack\n");
}

void DisposeStack(){
	for(i=0;i<=max;i++)
		ARRAY[i] = NULL;
	n=-1;
	printf("\nStack disposed.\n");
}

void Push(){
	int data;
	if(n<max){
		printf("\nEnter data: ");
		scanf("%d",&data);
		if(ARRAY[0]==NULL)
			ARRAY[0] = data;
		else
			ARRAY[n+1] = data;
		n++;
	}
	else
		printf("\nStack is full.\n");
}

void Pop(){
	if(ARRAY[0] == NULL)
		printf("\nCannot pop out of empty Stack.\n");
	else{
		printf("\nPopped %d\n",ARRAY[n]);
		ARRAY[n--] = NULL;
	}
}

void Top(){
	if(ARRAY[0] == NULL)
		printf("\nStack is Empty.\n");
	else
		printf("\Top %d\n",ARRAY[n]);
}

void IsFull(){
	if(n==max)
		printf("\nStack is Full.\n");
	else
		printf("\nStack is not Full.\n");
}

void IsEmpty(){
	if(n==-1)
		printf("\nStack is Empty\n");
	else
		printf("\nStack is not Empty\n");
}

void Print(){
	if(n==-1)
		printf("\nStack is Empty\n");
	else{
		printf("\n");
		for(i=0;ARRAY[i]!=NULL;i++)
			printf("%d->",ARRAY[i]);
		printf("\n");	
	}
}
