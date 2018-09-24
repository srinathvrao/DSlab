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

int Pop2(){
	p = (Node *) malloc(sizeof(Node));
	if(TOP->next != NULL){
		p->da = (TOP->next)->da;
		p->next = (TOP->next)->next;	
		z = TOP->da;
	}
	else
		z = TOP->da;
	free(TOP);
	TOP = p;
	return z;
}

void bal(){
	char s[10],c;
	printf("\nEnter string of brackets: \n");
	scanf("%s",&s);
	int i=0,a=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='{' || s[i]=='(' )	
			Push(s[i]);
		else{
			if(s[i]=='}'){
				if(Pop()!='{'){
					a=-1;
					printf("\nExpression is not balanced\n");
					break;
				}
			}
			else if(s[i]==')'){
				if(Pop()!='('){
					a=-1;
					printf("\nExpression is not balanced\n");
					break;
				}
			}
		}
	}
	
	if(TOP!=NULL && a==0)
		printf("\nExpression is not balanced\n");
	
	DisposeStack();
}

void Push2(int xyz){
	p = (Node *) malloc(sizeof(Node));
	p->da = xyz;
	if(TOP==NULL){
		p->next = NULL;
		TOP = p;
	}
	else{
		p->next = TOP;
		TOP = p;
	}
}

void postf(){
	char s[10],c;
	int a,b,i;
	printf("\nEnter postfix expression: \n");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			a = atoi(Pop());
			b = atoi(Pop());
			Push(b/a);
		}
		else
			Push(s[i]);
	}
	
	printf("%d",Pop2());
	
	DisposeStack();
	
}

void DisposeStack(){
	p = (Node *) malloc(sizeof(Node));
	q = (Node *) malloc(sizeof(Node));
	p = TOP;
	q = TOP;
	while(p!=NULL){
		q = q->next;
		free(p);
		p = q;
	}
	TOP = NULL;
}
