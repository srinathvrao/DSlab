#include<stdio.h> 
#include "radix.h"
int main() 
{ 
int n,a[20];
    printf("enter the size of list:");
    scans("%d",&n);
    printf("enter the data of unsorted list:");
    for(int i=0;i<n;i++){
    scanf("%d\t",&a[i]);
	}
    radixsort(a, n); 
    display(a, n); 
    return 0; 
} 
