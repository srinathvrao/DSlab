#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*front,*rear,*temp,*front1;
 

void enq(int data);
void deq();
void empty();
void display();
void create();

