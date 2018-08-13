#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node*pre;
}*start=NULL,*q,*t,*p;

int ch=-1;
void insert_beg();
void insert_end();
int insert_pos();
void displaybeg();
void displayend();
void delete_beg();
void delete_end();
int delete_pos();
void find();
void findk();
void get_length();
void next_item();

