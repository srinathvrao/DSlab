#include<stdio.h>
#include "linear.h"
int main(){
	int a[10],n,i,ele;
	printf("enter the size of list:");
	scanf("%d",&n);
	printf("enter the data:");
	for(i=0;i<n;i++){
		scanf("\t%d",&a[i]);
	}
	printf("enter the search element:");
	scanf("%d",&ele);
	linear(a,n,ele);
}
