#include "jos-h.h"

void createqueue(int n){
	int i=1;
	for(i=1;i<=n;i++){
		p = (Node *) malloc(sizeof(Node));
		p->person = i;
		insertintoqueue();
	}
}

void kill(){
	int y = 1,xyz=0;
	int abc=1;
	r = (Node *) malloc(sizeof(Node));
	r = FRONT;
	while(r!=NULL){
		r = r->next;
		if(r->person == FRONT->person && abc!=1)
			break;
		abc++;
	}
	if(abc>2){
		REAR->next = FRONT->next;
		free(FRONT);
		FRONT = REAR->next;
	}
	else{
		FRONT = REAR;
		FRONT->next = NULL;
		free(REAR);
	}
	y++;
	
	q = (Node *) malloc(sizeof(Node));
	p = (Node *) malloc(sizeof(Node));
	q = FRONT->next;
	p = FRONT;
	while(FRONT->next!=FRONT){
		xyz=1;
		while(q!=NULL){
			xyz++;
			if(xyz == k) break;
			p = p->next;
			q = q->next;
		}
		p->next = q->next;
		if(q->person == FRONT->person)
			FRONT = q->next;
		else if(q->person == REAR->person)
			REAR = q->next;
		p = p->next;
		free(q);
		q = p->next;
	}
	
}

void PrintQueue(){
	r = (Node *) malloc(sizeof(Node));
	r = FRONT;
	int c=1;
	while(r!=NULL){
		printf("%d->",r->person);
		r = r->next;
		if(r->person == FRONT->person && c!=1)
			break;
		c++;
	}
} 

void insertintoqueue(){
	if(FRONT == NULL){
		p->next = NULL;
		FRONT = p;
	}
	else{
		q = (Node *)malloc(sizeof(Node));
		q = FRONT->next;
		r = (Node *)malloc(sizeof(Node));
		r = FRONT;
		int c=1;
		while(q!=NULL){
			if(c!=1 && q->person == FRONT->person)
				break;
			q = q->next;
			r = r->next;
			c++;
		}
		
		p->next = FRONT;
		r->next = p;
		REAR = p;
	}
}
