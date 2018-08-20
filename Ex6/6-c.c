#include "6-h.h"

void Push(char x){
	p = (Node *) malloc(sizeof(Node));
	p->data = x;
	if(TOP==NULL){
		p->next = NULL;
		TOP = p;
	}
	else{
		p->next = TOP;
		TOP = p;
	}
}

char Pop(){
	p = (Node *) malloc(sizeof(Node));
	if(TOP->next != NULL){
		p->data = (TOP->next)->data;
		p->next = (TOP->next)->next;	
		y = TOP->data;
	}
	else if(TOP == NULL)
		y = '\0';
	else
		y = TOP->data;
	free(TOP);
	TOP = p;
	return y;
}
