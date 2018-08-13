#include "ex5-h.h"

void CreateStack(){
	START = NULL;
	if(START == NULL)
		printf("\nEmpty Stack created\n");
	else
		printf("\nError in creating Stack\n");
}

void DisposeStack(){
	if(START==NULL)
		printf("\nStack is empty\n");
	else{
		p = (Node *)malloc(sizeof(Node));
		q = (Node *)malloc(sizeof(Node));
		q = START;
		while(p!=NULL && q!=NULL){
			p = q;
			q = q->next;
			free(p);
		}
		START = NULL;
	}
}

void Push(){
	p = (Node *)malloc(sizeof(Node));
	int data;
	printf("\nEnter data: ");
	scanf("%d",&data);
	if(START == NULL){
		p->data = data;
		p->next = NULL;
		START = p;
	}
	else{
		q = (Node *)malloc(sizeof(Node));
		p = START;
		while(p->next!=NULL)
			p = p->next;
		q->data = data;
		q->next = NULL;
		p->next = q;
	}
}

void Pop(){
	if(START == NULL)
		printf("\nCannot Pop out of empty stack\n");
	else{
		p = (Node *)malloc(sizeof(Node));
		p = START;
		q = (Node *)malloc(sizeof(Node));
		q = START->next;
		if(q != NULL){
			while(q->next!=NULL){
				p = p->next;
				q = q->next;
			}
			printf("\nPopped %d\n",q->data);
			p->next = NULL;
			free(q);
		}
		else{
			printf("\nPopped %d\n",p->data);
			free(p);
			START = NULL;
		}
	}
}

void Top(){
	if(START == NULL)
		printf("\nStack is empty\n");
	else{
		p = (Node *)malloc(sizeof(Node));
		p = START;
		while(p->next!=NULL)
			p = p->next;
		printf("\nTop %d\n",p->data);
	}
}

void IsEmpty(){
	if(START == NULL)
		printf("\nStack is empty\n");
	else
		printf("\nStack is not empty\n");
	
}

void Print(){
	if(START == NULL)
		printf("\nStack is empty\n");
	else{
		p = (Node *)malloc(sizeof(Node));
		p = START;
		printf("\nBottom -> Top\n");
		while(p!=NULL){
			printf("%d->",p->data);
			p = p->next;
		}
	}
}
