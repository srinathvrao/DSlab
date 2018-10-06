#include<stdio.h>

struct node{
	int data;
	struct node *next;
} *START = NULL, *p, *r,*q;

void MakeEmpty();
void GetLength();
void GetNextItem();
void InsertFirst();
void InsertKth();
void InsertLast();
void FindKth();
void Find();
void DeleteFirst();
void DeleteMiddle();
void DeleteLast();
void PrintList();
