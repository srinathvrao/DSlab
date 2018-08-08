#include "ex3-h.h"

void PrintPoly(){
	printf("\n Sum of 2 polynomials: \n");
	x = (struct node *) malloc(sizeof(struct node));
	x = RESULTSUM;
	while(x!=NULL){
		printf("(%d,%d)->",x->coeff,x->deg);
		x = x->next;
	}
	printf("\n");
	printf("\n Product of 2 polynomials: \n");
	x = RESULTPRODSIM;
	while(x!=NULL){
		printf("(%d,%d)->",x->coeff,x->deg);
		x = x->next;
	}
}

void ReadPoly(){

	int i=1;
	printf("P1:\n");
	for(;i;){
		
		insertend1();
		printf("\ncontinue? (1/0): ");
		scanf("%d",&i);
	}

	i=1;
	printf("\nP2:\n");
	for(;i;){
		
		insertend2();
		printf("\ncontinue? (1/0): ");
		scanf("%d",&i);
	}
}

void AddPoly(){
	r = (struct node *) malloc(sizeof(struct node));
	r = START1;
	p = (struct node *) malloc(sizeof(struct node));
	p = START2;
	while(r!=NULL && p!=NULL){
		q = (struct node *) malloc(sizeof(struct node));
		if(r->deg == p->deg){
			q->coeff = r->coeff + p->coeff;
			q->deg = r->deg;
			r = r->next;
			p = p->next;
		}
		else if(r->deg > p->deg){
			q->coeff = r->coeff;
			q->deg = r->deg;
			r = r->next;
		}
		else if(r->deg < p->deg){
			q->coeff = p->coeff;
			q->deg = p->deg;
			p = p->next;
		}
		if(RESULTSUM == NULL){
			RESULTSUM = q;
			q->next = NULL;
		}
		else{
			x = (struct node *) malloc(sizeof(struct node));
			x = RESULTSUM;
			while(x->next != NULL)
				x = x->next;
			q->next = NULL;
			x->next = q;
		}
	}	

	while(p!=NULL){
		if(RESULTSUM == NULL){
			RESULTSUM = p;
			p->next = NULL;
		}
		else{
			x = (struct node *) malloc(sizeof(struct node));
			x = RESULTSUM;
			while(x->next != NULL)
				x = x->next;
			q->next = NULL;
			x->next = p;
		}
		p = p->next;
	}

	while(r!=NULL){
		if(RESULTSUM == NULL){
			RESULTSUM = r;
			r->next = NULL;
		}
		else{
			x = (struct node *) malloc(sizeof(struct node));
			x = RESULTSUM;
			while(x->next != NULL)
				x = x->next;
			q->next = NULL;
			x->next = r;
		}
		r = r->next;
	}

}

void MultiplyPoly(){
	r = (struct node *) malloc(sizeof(struct node));
	r = START1;
	p = (struct node *) malloc(sizeof(struct node));
	p = START2;
	while(r!=NULL){
		p = START2;
		while(p!=NULL){
			q = (struct node *) malloc(sizeof(struct node));
			q->coeff = r->coeff * p->coeff;
			q->deg = r->deg + p->deg;
				
			if(RESULTPROD == NULL){
				q->next = NULL;
				RESULTPROD = q;
			}
			else{
				x = (struct node *) malloc(sizeof(struct node));
				x = RESULTPROD;
				while(x->next != NULL)
					x = x->next;
				q->next = NULL;
				x->next = q;	
			}
			p=p->next;
		}
		r=r->next;
	}
	
	Simplify();
	
}

void Simplify(){
	r = (struct node *) malloc(sizeof(struct node));
	r = RESULTPROD;
	int X, sumcoeff=0;
	for(X=20;X>=0;X--){
		sumcoeff = 0;
		r = RESULTPROD;
		while(r != NULL){
			if(r->deg == X)
				sumcoeff += r->coeff;
			r=r->next;
		}
		if(RESULTPRODSIM == NULL && sumcoeff!=0){
			x = (struct node *) malloc(sizeof(struct node));
			x->coeff = sumcoeff;
			x->deg = X;
			x->next = NULL;
			RESULTPRODSIM = x;
		}
		else if(sumcoeff!=0){
			x = (struct node *) malloc(sizeof(struct node));
			x = RESULTPRODSIM;
			while(x->next!=NULL)
				x = x->next;
			q = (struct node *) malloc(sizeof(struct node));
			q->coeff = sumcoeff;
			q->deg = X;
			q->next = NULL;
			x->next = q;
		}
		
	}
		
}

void insertend1(){

	int coeff,deg;
	printf("coeff: ");
	scanf("%d",&coeff);
	printf("degree: ");
	scanf("%d", &deg);
	if(START1==NULL){
		p = (struct node *) malloc(sizeof(struct node));
		p->coeff = coeff;
		p->deg = deg;
		p->next = NULL;
		START1 = p;
	}
	else{	
		p = (struct node *) malloc(sizeof(struct node));
		p = START1;
		while(p->next != NULL)
			p = p->next;
		q = (struct node *) malloc(sizeof(struct node));
		q->coeff = coeff;
		q->deg = deg;
		q->next = NULL;
		p->next = q;
		
	}


}


void insertend2(){

	int coeff,deg;
	printf("coeff: ");
	scanf("%d",&coeff);
	printf("degree: ");
	scanf("%d", &deg);
	if(START2==NULL){
		p = (struct node *) malloc(sizeof(struct node));
		p->coeff = coeff;
		p->deg = deg;
		p->next = NULL;
		START2 = p;
	}
	else{	
		p = (struct node *) malloc(sizeof(struct node));
		p = START2;
		while(p->next != NULL)
			p = p->next;
		q = (struct node *) malloc(sizeof(struct node));
		q->coeff = coeff;
		q->deg = deg;
		q->next = NULL;
		p->next = q;
		
	}


}
