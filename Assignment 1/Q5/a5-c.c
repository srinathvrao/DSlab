#include "a5-h.h"

int get_length()
{
	int count = 0;
	 if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        //q=start;
        count=1;
        q=start->next;
        while(q!=start)
        {
            ++count;
            q=q->next;
        }
    }
    //printf("\n The number of elements in the list are: %d",count );
    return count;
}
void insert_beg()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
 
    if(start==NULL)        //If list is empty
    {
        t->next=NULL;
        start=t;
        t->next=start;
    }
    else
    {
        t->next=start;
        start=t;
        p=start->next;
        if(p->next==p)
        p->next = start;
        else
        {
        	while(p->next!=start->next)
			{
				p = p->next;	
			}
			p->next = start;	
			
			
		}
       // p=p->next;
        //p->next=start;
    }
}
 
void insert_end()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
 	if(start==NULL)        //If list is empty
    {
        start=t;
        t->next = start;
    }
    else
    {
    	 q=start;
    	if(q->next==q)
    	{
    		q->next = t;
    		t->next = start;
		}
		else
		{
			while(q->next!=start)
        	q=q->next;
        	q->next=t;
        	t->next=start;	
		}
        
    }
}
void findk()
{
	int pos;
	printf("Enter the 'K' position where the element is to be searched:");
    scanf("%d",&pos);
    int count = 0;
	 if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {   t=start->next;
        q=start;
        while(t!=start)
        {
            if(count==pos-1)
            {
            	printf("\n The element at 'K' position is %d",q->data);
            	break;
            }
	    count++;
            q=q->next;
            t=q;
        }
    }
}
void find()
{
	int num;
	printf("Enter data:");
    scanf("%d",&num);
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {   t=start->next;
        q=start;
        while(t!=start)
        {
            if(q->data == num)
            {
            	printf("\n Element found!!!");
            	break;
            }
            else
            q=q->next;
            t=q;
        }
    }

}
int insert_pos()
{
    int pos,i,num; 
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    t->data=num;
     if(start==NULL)
    {
    	 start=t;
        t->next = start;
    }
    else if(pos==get_length()+1)
    {   
        q=start;
        while(q->next!=start)
        	q=q->next;
        	q->next=t;
        	t->next=start;	
    }
    else
	{
    q=start;
    for(i=1;i<pos-1;i++)
    {
        q=q->next;
    }
	t->next=q->next;
	q->next = t;
    
}
    return 0;
}
 
void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        t=start->next;
        printf("The linked list is:\n");
        while(t!=start)
        {
            printf("%d->",q->data);
            q=q->next;
            t=q;
        }
        printf("%d->",start->data);
    }
}
 
void delete_beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        t=start;
        while(t->next!=q)
        t=t->next;
        t->next=start;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
 
void delete_end()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        while(q->next->next!=start)
        q=q->next;
 
        t=q->next;
        q->next=start;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}
 
int delete_pos()
{
    int pos,i;
 
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
 
    printf("Enter position to delete:");
    scanf("%d",&pos);
    if(pos==get_length()+1)
    {   
        p=start->next;
        q=start;
        while(p->next->next!=start)
       { 
           q=q->next;
           p=q;
       }
       q=p->next;
       p->next=start;
      free(q);
    }
   else
   {
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
        q=q->next;
    }
 
    t=q->next;
    q->next=t->next;
    printf("Deleted element is %d",t->data);
    free(t);
   }
return 0;
}
void next_item()
{
	int pos;
	printf("Enter the position:");
    scanf("%d",&pos);
    int count = 0;
	 if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        while(q!=NULL)
        {
            if(count==pos)
            {
            	printf("\n The element after position %d is %d",pos,q->data);
            	break;
            }
	    count++;
            q=q->next;
        }
    }
}
