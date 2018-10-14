#include<stdio.h>
#include<malloc.h>
struct hash
{
	int data;
	struct hash *next;
}*A[7]={NULL,NULL,NULL,NULL,NULL,NULL,NULL},*temp,*q;
int a[7]={-999,-999,-999,-999,-999,-999,-999};

