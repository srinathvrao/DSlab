#include"list.h"

void insertbeg(){
	
	int data,i=0;

	if(n==-1){

		printf("\nEnter integer: ");
		scanf("%d",&data);
		ARR[0] = data;
		n++; 

	}	
	else{
		if(n == max)
			printf("\nList is full. Cannot insert data.\n");
		else{
			printf("\nEnter integer: ");
			scanf("%d",&data);
			for(i=n;i>-1;i--)
				ARR[i+1] = ARR[i];
			ARR[0] = data;
			n++;
		}
	}

}

void isfull(){
	if(n==max)
		printf("\nList is full.\n");
	else
		printf("\nList is not full.\n");
}

void isempty(){
	if(n==-1)
		printf("\nList is empty.\n");
	else
		printf("\nList is not empty.\n");
}



void insertpos(){
	int data,i=0,pos;

	if(n==-1){

		printf("\nEnter integer: ");
		scanf("%d",&data);
		ARR[0] = data;
		n++; 

	}	
	else{
		if(n == max)
			printf("\nList is full. Cannot insert data.\n");
		else{
			printf("\nEnter index to insert at: ");
			scanf("%d",&pos);
			printf("\nEnter integer: ");
			scanf("%d",&data);
			for(i=n;i>=pos;i--)
				ARR[i+1] = ARR[i];
			ARR[pos] = data;
			n++;
		}
	}
}

void insertend(){
	int data,i=0;

	if(n==-1){

		printf("\nEnter integer: ");
		scanf("%d",&data);
		ARR[0] = data;
		n++; 

	}	
	else{
		if(n == max)
			printf("\nList is full. Cannot insert data.\n");
		else{
			printf("\nEnter integer: ");
			scanf("%d",&data);
			ARR[++n] = data;
		}
	}
}

void elementat(){
	int ch22;
	printf("\nEnter index: ");
	scanf("%d",&ch22);
	if(ch22>n)
		printf("\nInvalid Index\n");
	else
		printf("\n%d\n",ARR[ch22]);
}

void del(){
	int data,i=0,pos,ch22;

	if(n==-1)
		printf("\nList is empty. Cannot delete elements.\n");
	else{
		printf("\n1.Delete at beginning: \n2. Delete at position: \n3. Delete at end: \n");
		scanf("%d",&ch22);
		switch(ch22){
			case 1:
				for(i=0;i<=n;i++)
					ARR[i] = ARR[i+1];
				n--;
				break;
			case 2:
				printf("\nEnter index of element to delete: ");
				scanf("%d",&pos);
				for(i=pos;i<=n;i++)
					ARR[i] = ARR[i+1];
				n--;
					break;
			case 3:
				n--;
				break;
			default: printf("\nInvalid Choice\n");
		}
	}
}

void findk(){
	int data,i=0;
	if(n==-1)
		printf("\nList is empty. Cannot search elements.\n");
	else{
		printf("\nEnter integer to search: ");
		scanf("%d",&data);
		for(i=0;i<=n;i++){
			if(ARR[i]==data){
				printf("\nElement found at index %d\n",i);
				break;
			}
		}
		if(ARR[i]!=data)
			printf("\nElement not found\n");
	}
}

void print(){
	int i=0;
	for(i=0;i<=n;i++)
		printf("%d -> ",ARR[i]);
}
