#include "a4-h.h"

void populatell(){
	
	int array1[5] = {1,3,5,7,9};
	int array2[5] = {2,4,6,8,10};
	int i;
	for(i=0;i<5;i++){
		p = (Node *) malloc(sizeof(Node));
		p->data = array1[i];
		p->next = NULL;
		if(START1 == NULL)
			START1 = p;
		else{
			q = (Node *) malloc(sizeof(Node));
			q = START1;
			while(q->next != NULL)
				q = q->next;
			q->next = p;
		}
	}
	for(i=0;i<5;i++){
		p = (Node *) malloc(sizeof(Node));
		p->data = array2[i];
		p->next = NULL;
		if(START2 == NULL)
			START2 = p;
		else{
			q = (Node *) malloc(sizeof(Node));
			q = START2;
			while(q->next != NULL)
				q = q->next;
			q->next = p;
		}
	}
	
}

void merge(){
	
	p = (Node *) malloc(sizeof(Node));
	q = (Node *) malloc(sizeof(Node));
	p = START1;
	q = START2;
	int count=1;
	while(p!=NULL && q!=NULL){
		r = (Node *) malloc(sizeof(Node));
		if(count%2 != 0){
			r->data = p->data;
			r->next = NULL;
			insertmain();
			p = p->next;
		}
		else{
			r->data = q->data;
			r->next = NULL;
			insertmain();
			q = q->next;
		}
		count++;
	}
	while(q!=NULL){
		r = (Node *) malloc(sizeof(Node));
		r->data = q->data;
		r->next = NULL;
		insertmain();
		q = q->next;
	}
	while(p!=NULL){
		r->data = p->data;
		r->next = NULL;
		insertmain();
		p = p->next;
	}
	
}

void insertmain(){
	if(START==NULL)
		START = r;
	else{
		s = (Node *) malloc(sizeof(Node));
		s = START;
		while(s->next != NULL)
			s = s->next;
		s->next = r;
	}
}

void printll(){
	r = (Node *) malloc(sizeof(Node));
	r = START;
	p = (Node *) malloc(sizeof(Node));
	p = START1;
	q = (Node *) malloc(sizeof(Node));
	q = START2;
	
	printf("\nList 1: \n");
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;
	}
	printf("\n\nList 2: \n");
	while(q!=NULL){
		printf("%d->",q->data);
		q = q->next;
	}
	printf("\n\nFinal merged list: \n");
	while(r!=NULL){
		printf("%d->",r->data);
		r = r->next;
	}
	printf("\n");
}
