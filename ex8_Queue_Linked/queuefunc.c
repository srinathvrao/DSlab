#include"queue.h"

void create()
{
    front = rear = NULL;
}


void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->data = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = data;
        temp->next = NULL;
 
        rear = temp;
    }
    
}
 

void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->data);
        front1 = front1->next;
    }
    if (front1 == rear)
        printf("%d", front1->data);
}
 

void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n empty queue");
        return;
    }
    else
        if (front1->next != NULL)
        {
            front1 = front1->next;
            printf("\n Dequed : %d", front->data);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
       
}
 

 

void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}
