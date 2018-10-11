#include<stdio.h>
void shell(int a[10],int n){
	int gap,j,i;
	for(gap=n/2; gap>0; gap=gap/2){
		for(i=gap ; i<n ; i++){
			int temp=a[i];
			for(j=i; j>=gap && a[j-gap]>temp ; j=j-gap){
				a[j]=a[j-gap];
			}
			a[j]=temp;
		}	
	}	
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}
