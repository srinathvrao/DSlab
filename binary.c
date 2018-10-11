#include<stdio.h>
#include "binary.h"
int main(){
	int a[10],n,i,ele;
	printf("enter the size of list:");
	scanf("\t%d",&n);
	printf("enter the data:");
	for(i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}
	printf("enter the search element:");
	scanf("%d",&ele);
	binary(a,n,ele);
}
