#include<stdio.h>
void bubble(int a[10],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
			int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}
