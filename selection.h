#include<stdio.h>
void selection(int a[10],int n){
	int i,j;
	for(i=0;i<n;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
			int temp=a[min];
				a[min]=a[i];
				a[i]=temp;
	//	swap(a[min],a[i]);
	}
}
/*void swap(int a,int b,int i,int min){
int temp=a;
a=b;
b=temp;
}*/
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}
