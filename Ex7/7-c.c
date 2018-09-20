#include "7-h.h"

void CreateQueue(){
	for(i=0;i<=max;i++)
		ARR[i]=-1;
	n=-1;
	printf("\nQueue created.\n");
}

void DisposeQueue(){
	for(i=0;i<=max;i++)
		ARR[i]=-1;
	n=-1;
	printf("\nQueue disposed.\n");
}

void IsEmpty(){
	if(n==-1)
		printf("\nQueue is empty\n");
	else
		printf("\nQueue is not empty\n");
}

void IsFull(){
	if(n==max)
		printf("\nQueue is full\n");
	else
		printf("\nQueue is not full\n");
}

void Enqueue(){
	int data;
	if(n==-1){
		printf("\nEnter data: ");
		scanf("%d",&data);
		ARR[++n] = data;
	}
	else if(n<max){
		printf("\nEnter data: ");
		scanf("%d",&data);
		ARR[++n] = data;
	}
	else
		printf("\nQueue is full. Cannot enqueue. \n");
}

void Dequeue(){
	if(n==-1)
		printf("\nQueue is empty. Cannot dequeue. \n");
	else{
		printf("\nDequeued: %d\n",ARR[0]);
		for(i=0;i<n;i++)
			ARR[i] = ARR[i+1];
		n--;
	}
}

void FrontAndRear(){
	if(n!=-1) printf("\nFront: %d\n Rear: %d\n",ARR[0],ARR[n]);
	else printf("\nQueue is empty.\n");
}

void DisplayQueue(){
	if(n!= -1){
		printf("Front <- Rear\n");
		for(i=0;i<=n;i++)
			printf("%d<-",ARR[i]);	
	}
	else
		printf("\nQueue is empty.\n");
}
