#include "a1h.h"

void populatell(){
	
	int array[5] = {1,2,3,4,5}, i=0;
	for(i=0;i<5;i++){
		p = (Node *) malloc(sizeof(Node));
		if(START == NULL){
			p->data = array[i];
			p->next = NULL;
			START = p;
		}
		else{
			q = (Node *) malloc(sizeof(Node));
			q = START;
			while(q->next != NULL)
				q = q->next;
			p->data = array[i];
			p->next = NULL;
			q->next = p;
		}
	}
}

void reversell(){
	
	q = (Node *) malloc(sizeof(Node));
	q = START;
	while(q!=NULL){
		p = (Node *) malloc(sizeof(Node));
		if(START2 == NULL){
			p->data = q->data;
			p->next = NULL;
			START2 = p;
		}
		else{
			r = (Node *) malloc(sizeof(Node));
			p = (Node *) malloc(sizeof(Node));
			r = START2;
			p->data = q->data;
			p->next = r;
			START2 = p;
		}
		
		q = q->next;
	}
	
}

void Deletell(){
	p = (Node *) malloc(sizeof(Node));
	q = (Node *) malloc(sizeof(Node));
	p = START;
	q = START->next;
	while(q->next!=NULL && p!=NULL){
		free(p);
		p = q;
		q = q->next;
	}
	free(p);
	free(q);
	START = NULL;
	START = START2;
}

void Printll(){
	r = (Node *) malloc(sizeof(Node));
	r = START;
	while(r!=NULL){
		printf("%d->",r->data);
		r = r->next;
	}
}
