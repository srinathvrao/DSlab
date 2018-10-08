#include <stdio.h>

struct emp{
	int emp_no;
	float emp_sal;
	char emp_name[20];
};

typedef struct emp EMP;

void searchstr(){
	int n, i=0, j=0, check=0;
	printf("\nEnter n: ");
	scanf("%d",&n);
	char strings[n][15], s[15];
	printf("\nEnter %d strings: \n", n);
	for(i=0;i<n;i++)
		scanf("%s", &strings[i]);
	printf("\nEnter string to search for: ");
	scanf("%s",&s);
	for(i=0;i<n;i++)
		if(strcmp(strings[i],s) == 0){
			printf("\nFound %s at position %d\n",s,i);
			check = 1;
			break;
		}
	if(!check)
		printf("\nElement was not found.\n");
	
}

void binsearchemp(){
	int n, i=0, j=0, check=0,eno, lower=0,upper=0,mid=0;
	printf("\nEnter n: ");
	scanf("%d",&n);
	upper = n-1;
	EMP ARR[n], temp;
	for(i=0;i<n;i++){
		printf("\n========\nEnter employee number: ");
		scanf("%d",&(ARR[i].emp_no));
		printf("\nEnter name of employee: ");
		scanf("%s",&(ARR[i].emp_name));
		printf("\nEnter salary of employee: ");
		scanf("%f",&(ARR[i].emp_sal));
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=i;j<n-i;j++){
			printf("\n%d , %d\n", ARR[j-1].emp_no,ARR[j].emp_no);
			if(ARR[j-1].emp_no>ARR[j].emp_no){
				temp = ARR[j];
				ARR[j] = ARR[j-1];
				ARR[j-1] = temp;
			}
		}
	}
	printf("\n%d %d %d",ARR[0].emp_no,ARR[1].emp_no,ARR[2].emp_no);
	printf("\nEnter the employee number to search for: ");
	scanf("%d",&eno);
	
	while(lower<upper){
		mid = (int)((lower+upper)/2);
		printf("lower: %d, upper: %d, mid: %d\n",ARR[lower].emp_no,ARR[upper].emp_no,ARR[mid].emp_no);
		if(ARR[mid].emp_no==eno){
			//get details
			check =1;
			break;
		}
		else if(eno<ARR[mid].emp_no)
			upper = mid;
		else
			lower = mid;
	}
	if(!check)
		printf("\nEmployee number not found.\n");
}

int main(){
	
	int choice=10;
	while(choice){
		printf("\n=========\n1.Linear search strings\n2. Binary search employees\n0. Exit\nChoice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: searchstr();
				break;
			case 2: binsearchemp();
				break;
			case 0:
				break;
			default: printf("\nInvalid choice.\n");
		}
	}
	printf("\nProgram terminated.\n");	
	
	return 0;
}
