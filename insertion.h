#include<stdio.h>
void insertion(int a[],int n){
	int i,j;
	for(i=1;i<n;i++){
		int temp=a[i];
		j=i-1;		
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
	a[j+1]=temp;
	}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}
