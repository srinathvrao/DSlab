#include<stdio.h>

struct node {

	int coeff, deg;
	struct node *next;

} *START1 = NULL, *START2 = NULL, *p, *q, *r, *x, *RESULTSUM, *RESULTPROD,*RESULTPRODSIM;

void ReadPoly();
void AddPoly();
void MultiplyPoly();
void PrintPoly();
void insertend1();
void insertend2();
void Simplify();
