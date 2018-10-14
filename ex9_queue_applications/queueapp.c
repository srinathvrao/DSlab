#include "queueappli.h"
void creat()
{
    start=NULL;
    end=NULL;
    printf("queue created\n");
}
void josephus(int n,int k)
{   
    int i;
    creat();
    for(i=1;i<=n;i++)
    {
       if (end == NULL)
        {
        end = (struct node *)malloc(sizeof(struct node));
        end->next = NULL;
        end->data = i;
        start = end;
        }
        else
        {
        temp=(struct node *)malloc(sizeof(struct node));
        end->next = temp;
        temp->data = i;
        temp->next = NULL;
        end = temp;
        } 
    }
    end->next=start;
    t=start;
    while(n>1)
    {   
        for(i=1;i<k-1;i++)
        {t=t->next;}
        end=t;
        t=t->next;
        start=t;
        q=t;
        t=t->next;
        free(q);
        start=t;
        end->next=start;
        n--;
    }
    
printf("the safest position is %d \n",start->data);
}
void create (struct help *m,struct help *n)
{
    n=NULL;
    m=NULL;
}
void enqu(char x[],char y[])
{
        if (rear == NULL)
    {
        rear = (struct help*)malloc(sizeof(struct help));
        rear->next = NULL;
        strcpy(rear->des,y);
        strcpy(rear->name,x);
        front = rear;
        front->next=NULL;
    }
    else
    {
        temp=(struct help*)malloc(sizeof(struct help));
        rear->next = temp;
        rear=rear->next;
        rear->next=NULL;
        strcpy(rear->des,y);
        strcpy(rear->name,x);
    }
    a++;
}
void enq(char y[])
{
        if (r2 == NULL)
    {
        r2 = (struct help*)malloc(sizeof(struct help));
        r2->next = NULL;
        strcpy(r2->name,y);
        f2 = r2;
        f2->next=NULL;
        b=b+1;
    }
    else
    {
        temp=(struct help*)malloc(sizeof(struct help));
        r2->next = temp;
        r2=r2->next;
        r2->next=NULL;
        strcpy(r2->name,y);
        b=b+1;
    }
    
}
void en(char y[])
{
        if (r3 == NULL)
    {
        r3= (struct help*)malloc(sizeof(struct help));
        r3->next = NULL;
        strcpy(r3->name,y);
        f3 = r3;
        f3->next=NULL;
        c=c+1;
    }
    else
    {
        temp=(struct help*)malloc(sizeof(struct help));
        r3->next = temp;
        r3=r3->next;
        r3->next=NULL;
        strcpy(r3->name,y);
        c=c+1;
    }
    
}
void e(char y[])
{
        if (r4 == NULL)
    {
        r4= (struct help*)malloc(sizeof(struct help));
        r4->next = NULL;
        strcpy(r4->name,y);
        f4 = r4;
        f4->next=NULL;
        d=d+1;
    }
    else
    {
        temp=(struct help*)malloc(sizeof(struct help));
        r4->next = temp;
        r4=temp;
        r4->next=NULL;
        strcpy(r4->name,y);
        d=d+1;
    }
}


void helpdesk()
{
    f2=NULL;
    r2=NULL;
    f3=NULL;
    r3=NULL;
    f4=NULL;
    r4=NULL;
    p=front;
    while(p!=NULL)
    {   
        if(strcmp(p->des,"platinum")==0)
        {
            enq(p->name);
            p=p->next;
        }
        else if(strcmp(p->des,"elite")==0)
        {
            en(p->name);
            p=p->next;
        }
        else if(strcmp(p->des,"new")==0)
        {
            e(p->name);
            p=p->next;
        }
        else
        ;
    }
 }
void display(struct help*f,struct help*r)
{
    p=f;
 
    if (p==NULL)
    {
        printf("There are no members\n");
    }
    else
    {
    while (p!= NULL)
    {
        printf("%s ->",p->name);
        p=p->next;
    }
    }
}
void deque(struct help*newptr,char desc[])
{
      printf("\nthe room is now being alloted to %s who is our ",newptr->name);
        printf("%s member",desc);
        p=newptr;
        newptr=newptr->next;
        free(p);
        if((newptr==NULL)&&(strcmp(desc,"platinum")==0))
         r2 = NULL;
        else if((newptr==NULL)&&(strcmp(desc,"elite")==0))
         r3= NULL;
        else if((newptr==NULL)&&(strcmp(desc,"new")==0))
         r4= NULL;
        else
        ;

}
