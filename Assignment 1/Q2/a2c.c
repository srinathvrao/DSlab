#include "a2-h.h"

void populatell(){
	int array[10] = {1,2,3,4,3,4,5,5,5,5};
	int i;
	for(i=0;i<10;i++){
		p = (Node * ) malloc(sizeof(Node));
		p->data = array[i];
		if(START == NULL){
			p->next = NULL;
			START = p;
		}
		else{
			q = (Node * ) malloc(sizeof(Node));
			q = START;
			while(q->next != NULL)
				q = q->next;
			p->next = NULL;
			q->next = p;
		}
	}
}

void deleteconsec(){
	p = (Node * ) malloc(sizeof(Node));
	p = START;
	q = (Node * ) malloc(sizeof(Node));
	q = START->next;
	while(q!=NULL){
		
		if(q->data == p->data){
			p->next = q->next;
			free(q);
		}
		else
			p = p->next;
		
		q = p->next;
	}
	
}

void printll(){
	p = (Node * ) malloc(sizeof(Node));
	p = START;
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;
	}
}
