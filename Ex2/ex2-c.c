#include "ex2-h.h"
int count=0, ind, data;

void MakeEmpty(){
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));//current
		p = START;
		q = (struct node *) malloc(sizeof(struct node));//next
		while(p!=NULL){
			q = p->next;
			free(p);
			p = q;
		}
		START = NULL;
	}
}

void GetLength(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		while(p!=NULL){
			count++;
			p=p->next;
		}
		printf("\nNumber of items: %d\n",count);
	}
	
}

void GetNextItem(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		printf("\nEnter index of item: ");
		scanf("%d",&ind);
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		count=0;
		while(p!=NULL){
			count++;
			p=p->next;
		}
		if(ind>count-2)
			printf("\nInvalid index\n");
		else{
			p  = START;
			int c = -1;
			while(p!=NULL){
				c++;
				if(c == ind+1){
					printf("\nNext Item of index is: %d\n",p->data);
					break;
				}
				p=p->next;
			}
		}	
	}
	
}

void InsertFirst(){
	printf("\nEnter data: ");
	scanf("%d",&data);
	if(START==NULL){
		p = (struct node *) malloc(sizeof(struct node));
		p->data = data;
		p->next = NULL;
		START = p;
	}
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		q = (struct node *) malloc(sizeof(struct node));
		q->data = data;
		q->next = p;
		START = q;
	}
}

void InsertKth(){
	printf("\nEnter data: ");
	scanf("%d",&data);
	if(START==NULL){
		printf("\nList is empty... Inserting as first element.\n");
		p = (struct node *) malloc(sizeof(struct node));
		p->data = data;
		p->next = NULL;
		START = p;
	}
	else{
		p = (struct node *) malloc(sizeof(struct node));
		printf("\nEnter index to be inserted at: ");
		scanf("%d",&ind);
		p  = START;
		q = (struct node *) malloc(sizeof(struct node));
		q = p->next;
		int c = 0;
		while(q!=NULL){
			c++;
			if(c==ind)
				break;
			p = p->next;
			q = q->next;
		}
		r = (struct node *) malloc(sizeof(struct node));
		r->data = data;
		r->next = q;
		p->next = r;
	}
}

void InsertLast(){
	printf("\nEnter data: ");
	scanf("%d",&data);
	if(START==NULL){
		printf("\nList is empty... Inserting as first element.\n");
		p = (struct node *) malloc(sizeof(struct node));
		p->data = data;
		p->next = NULL;
		START = p;
	}
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		while(p->next!=NULL)
			p = p->next;
		q = (struct node *) malloc(sizeof(struct node));
		q->data = data;
		q->next = NULL;
		p->next = q;
	}
	
}

void FindKth(){
	
	printf("\nEnter K: ");
	scanf("%d",&ind);
	p = (struct node *) malloc(sizeof(struct node));
	p  = START;
	int c = -1;
	while(p!=NULL){
		c++;
		if(c == ind){
			printf("\nData at index %d = %d\n",ind,p->data);
			break;
		}
		p = p->next;
	}
	if(c>ind)
		printf("\nInvalid index\n");
		
}

void Find(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		printf("\nEnter data: ");
		scanf("%d",&data);
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		int c = -1;
		while(p->next!=NULL){
			c++;
			if(p->data == data){
				printf("\nFound %d at index %d\n",data,c);
				break;
			}
			p = p->next;
		}
		if(p->data != data){
			printf("\nElement not found\n");
		}
	}	
}

void DeleteFirst(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		q = (struct node *) malloc(sizeof(struct node));
		q->data = (p->next)->data;
		q->next = (p->next)->next;
		free(p);
		START = q;
	}
	
}

void DeleteMiddle(){
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		int c=-1,x=0;
		while(p!=NULL){
			c++;
			p = p->next;
		}
		p = START;
		q = (struct node *) malloc(sizeof(struct node));
		q = p->next;
		while(q!=NULL){
			x++;
			if(x==c/2){
				p->next = q->next;
				free(q);
				break;
			}
			p = p->next;
			q = q->next;
			r = r->next;
		}
		
	}
	
}

void DeleteLast(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		q = (struct node *) malloc(sizeof(struct node));
		q = p->next;
		
		while(q->next!=NULL){
			p = p->next;
			q = q->next;
		}
		
		p->next = NULL;
		free(q);
		
	}
	
}

void PrintList(){
	
	if(START==NULL)
		printf("\nList is empty\n");
	else{
		p = (struct node *) malloc(sizeof(struct node));
		p  = START;
		printf("\n");
		while(p!=NULL){
			printf("%d->",p->data);
			p=p->next;
		}
		printf("\n");
	}
	
}
