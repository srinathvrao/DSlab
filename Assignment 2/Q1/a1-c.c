#include "a1-h.h"

void calc(int y){
	int rem=0;
	while(y>1){
		rem = y%2;
		Push(rem);
		y = y/2;
	}
	Push(y);
}

void Push(int x){
	p = (struct node *) malloc(sizeof(struct node));
	p->data = x;
	if(TOP == NULL){
		p->next = NULL;
		TOP = p;
	}
	else{
		q = (Node *) malloc(sizeof(Node));
		q = TOP;
		p->next = q;
		TOP = p;
	}
}

void PrintStack(){
	while(TOP!=NULL)
		Pop();
}

void Pop(){
	
	p = (Node *)malloc(sizeof(Node));
	p = TOP;
	q = (Node *)malloc(sizeof(Node));
	q = TOP->next;
	if(q != NULL){
		TOP = q;
		printf("%d",p->data);
		free(p);
	}
	else{
		printf("%d",p->data);
		free(p);
		TOP = NULL;
	}
	
}

