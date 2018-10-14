#include<stdio.h>
#include<stdlib.h>
#define Max 10
struct HeapStruct
{
	int Capacity;
	int Size;
	int *Elements;
};
typedef struct HeapStruct *PriorityQueue;
PriorityQueue H;
PriorityQueue Initialize (int MaxElements);

void Insert (int X, PriorityQueue H);
int DeleteMin (PriorityQueue H);
int FindMin (PriorityQueue H);
int IsEmpty (PriorityQueue H);
int IsFull (PriorityQueue H);
int Delete(PriorityQueue H,int k);
PriorityQueue BuildHeap(PriorityQueue H);

