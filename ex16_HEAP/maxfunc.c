#include"maxhead.h"

int IsFull (PriorityQueue H)
{
	if(H->Size>=H->Capacity)
		return 1;
	else
		return 0;
}

int IsEmpty(PriorityQueue H)
{
	if(H->Size==0)
	{
		return 1;
	}
	else
		return 0;
}
PriorityQueue Initialize (int MaxElements)
{
	PriorityQueue H;
	
	H = malloc (sizeof (struct HeapStruct));
	if (H == NULL)
		printf("Out of space!!!");
	/* Allocate the array plus one extra for sentinel */
	H->Elements = malloc ((MaxElements + 1)* sizeof (int));
	if (H->Elements == NULL)
		printf("Out of space!!!");
	H->Capacity = MaxElements;
	
	H->Elements [0] = 100;
	return H;
}

void Insert (int X, PriorityQueue H)
{
	int i;
	if (IsFull (H))
	{
		printf("Priority queue is full");
		return;
	}
	for (i = ++(H->Size); H->Elements [i / 2] < X && i>0;i /= 2 )
	{
	
		H->Elements [i] = H->Elements [i / 2];
	
	}
	H->Elements [i] = X;
}

int DeleteMax (PriorityQueue H)
{
	int i,j, Child;
	int MaxElement, LastElement;
	if (IsEmpty (H))
	{
		printf("\nPriority queue is empty");
		return H->Elements [0];
	}
	MaxElement = H->Elements [1];
	LastElement = H->Elements [H->Size--];
	for (i = 1; i * 2 <= H->Size; i = Child)
	{
	/* Find larger child */
		Child = i * 2;
		if ( Child != H->Size && H->Elements[Child + 1] > H->Elements[Child] )
		Child++;
		/* Percolate one level */
		if (LastElement < H->Elements [Child])
			H->Elements [i] = H->Elements [Child];
		else
			break;
	}
	H->Elements [i] = LastElement;
	return MaxElement;
}

int Delete(PriorityQueue H, int k)
{
	int i,j,Child;
	int deletedelement = H->Elements[k];
	
	for (i = k; i * 2 <= H->Size; i = Child)
	{
	/* Find smaller child */
		Child = i * 2;
		if ( Child != H->Size && H->Elements[Child + 1] > H->Elements[Child] )
		Child++;
		/* Percolate one level */
		if (H->Elements[i] > H->Elements [Child])
			H->Elements [i] = H->Elements [Child];
		else
			break;
	}
	for(j=i;j<H->Size;j++)
	{
		H->Elements[j]=H->Elements[j+1];
	}
	H->Size--;
	
	return deletedelement;
}

int FindMax(PriorityQueue H)
{
	return H->Elements[1];
}

PriorityQueue BuildHeap(PriorityQueue H)
{
	if (IsFull (H))
	{
		printf("Priority queue is full");
		return;
	}
	int mid,i,j,Child,temp;
	mid = (H->Size)/2;
	for(j=mid;j>0;j--)
	
	{
		temp = H->Elements[j];
		for(i=j;i*2<H->Size;i=Child)
		{
			Child = i*2;
			if ( Child != H->Size && H->Elements[Child + 1] > H->Elements[Child] )
			Child++;
			if (H->Elements[i] < H->Elements [Child])
				H->Elements [i] = H->Elements [Child];
			else
				break;
		}
		H->Elements[i]=temp;
	}
	return H;
}

