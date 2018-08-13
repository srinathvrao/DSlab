#include "a6-h.h"

void get_length(){
	int count = 0;
	 if(start==NULL)
        printf("List is empty!!");
    else{
        q=start;
        while(q!=NULL){
            count++;
            q=q->next;
        }
    }
    printf("\n The number of elements in the list are: %d",count );
}
void insert_beg(){
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
 
    if(start==NULL){
        t->next=NULL;
        start=t;
        t->pre=NULL;
    }
    else{
        t->next=start;
        start->pre=t;
        start=t;
        t->pre=NULL;
    }
}
 
void insert_end(){
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;
 
    if(start==NULL)
        start=t;
    else{
        q=start;
        while(q->next!=NULL)
        	q=q->next;
        q->next=t;
        t->pre=q;
    }
}
void findk(){
	int pos;
	printf("Enter the 'K' position where the element is to be searched:");
    scanf("%d",&pos);
    int count = 0;
	 if(start==NULL)
        printf("List is empty!!");
    else{
        q=start;
        while(q!=NULL){
            if(count==pos-1){
            	printf("\n The element at 'K' position is %d",q->data);
            	break;
            }
	    count++;
            q=q->next;
        }
    }
}
void find(){
	int num;
	printf("Enter data:");
    scanf("%d",&num);
    if(start==NULL)
        printf("List is empty!!");
    else{
        q=start;
        while(q!=NULL){
            if(q->data == num){
            	printf("\n Element found!!!");
            	break;
            }
            else
            q=q->next;
        }
    }
}

int insert_pos(){
    int pos,i,num;
    if(start==NULL){
        printf("List is empty!!");
        return 0;
    }
 
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    t->data=num;
 
    q=start;
    for(i=1;i<pos-1;i++){
        if(q->next==NULL){
            printf("There are less elements!!");
            return 0;
        }
        q=q->next;
    }
 
    t->next=q->next;
    q->next=t;
    t->pre=q;
    t=t->next;
    q=q->next;
    t->pre=q;
    return 0;
}
 
void displaybeg(){
    if(start==NULL)
        printf("List is empty!!");
    else{
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL){
            printf("%d->",q->data);
            q=q->next;
        }
    }
}

void displayend(){   
	t=start;    
    while(t->next!=NULL)
    	t=t->next;
    printf("the reverse list is\n");
    while(t!=NULL){
        printf("%d->",t->data);
        t=t->pre;
    }
}
 
void delete_beg(){
    if(start==NULL)
        printf("The list is empty!!");
    else{
        q=start;
        start=start->next;
        start->pre=NULL;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
 
void delete_end(){
    if(start==NULL)
        printf("The list is empty!!");
    else{
        q=start;
        while(q->next->next!=NULL)
        	q=q->next;
        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}
 
int delete_pos(){
    int pos,i;
    if(start==NULL){
        printf("List is empty!!");
        return 0;
    }
 
    printf("Enter position to delete:");
    scanf("%d",&pos);
 
    q=start;
    for(i=1;i<pos-1;i++){
        if(q->next==NULL){
            printf("There are less elements.");
            return 0;
        }
        q=q->next;
    }
 
    t=q->next;
    q->next=t->next;
    p=t->next;
    p->pre=q;
    
    printf("Deleted element %d",t->data);
    free(t);
	return 0;
}
void next_item(){
	int pos;
	printf("Enter the position:");
    scanf("%d",&pos);
    int count = 0;
	 if(start==NULL)
        printf("List is empty!!");
    else{
        q=start;
        while(q!=NULL){
            if(count==pos){
            	printf("\n The element after position %d is %d",pos,q->data);
            	break;
            }
	    	count++;
            q=q->next;
        }
    }
}

