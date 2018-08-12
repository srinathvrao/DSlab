#include "a3-h.h"

void populatell(){
	int array[10] = {1,2,3,4,3,4,5,5,5,5};
	int i;
	for(i=0;i<10;i++){
		p = (Node *) malloc(sizeof(Node));
		p->data = array[i];
		p->next = NULL;
		if(START == NULL)
			START = p;
		else{
			q = (Node *) malloc(sizeof(Node));
			q = START;
			while(q->next != NULL)
				q = q->next;
			q->next = p;
		}
	}
}

void split(){
	
	p = (Node *) malloc(sizeof(Node));
	p = START;
	int count=1;
	while(p != NULL){
		q = (Node *) malloc(sizeof(Node));
		q->data = p->data;
		q->next = NULL;
		if(count%2==0){
			if(START1 == NULL)
				START1 = q;	
			else{
				r = (Node *) malloc(sizeof(Node));
				r = START1;
				while(r->next != NULL)
					r=r->next;
				r->next = q;
			}
			
		}
		else{
			if(START2 == NULL)
				START2 = q;	
			else{
				r = (Node *) malloc(sizeof(Node));
				r = START2;
				while(r->next != NULL)
					r=r->next;
				r->next = q;
			}
		}
		
		count++;
		p = p->next;
	}
	
}

void printsplits(){
	
	p = (Node *) malloc(sizeof(Node));
	q = (Node *) malloc(sizeof(Node));
	r = (Node *) malloc(sizeof(Node));
	p = START1;
	q = START2;
	r = START;
	printf("\n Original list \n");
	while(r!=NULL){
		printf("%d->",r->data);
		r = r->next;
	}
	printf("\n List 1:\n");
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;
	}
	printf("\n List 2:\n");
	while(q!=NULL){
		printf("%d->",q->data);
		q = q->next;
	}
	
}

