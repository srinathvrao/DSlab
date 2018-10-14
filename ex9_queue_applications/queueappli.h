#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
void creat();
void josephus();
void en(char []);
void enq(char []);
void enqu(char [],char []);
void e(char []);
void helpdesk();
struct node
{
    int data;
    struct node*next;
}*start,*end,*q,*t,*temp;
struct help
{
    char des[20];
    char name[15];
    struct help* next;
}*front=NULL,*rear=NULL,*f2=NULL,*r2=NULL,*f3=NULL,*r3=NULL,*f4=NULL,*r4=NULL,*p;
int a=0,b=0,c=0,d=0;

