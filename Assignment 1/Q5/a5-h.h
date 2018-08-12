#include<stdio.h>
#include<stdlib.h>
 struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t,*p;
	int ch;
	char ch1='Y';
    void insert_beg();
    void insert_end();
    int insert_pos();
    void display();
    void delete_beg();
    void delete_end();
    int delete_pos();
    void find();
    void findk();
    int get_length();
    void next_item();
