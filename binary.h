#include<stdio.h>
void binary(int a[],int n,int e){
int first=0,last=n-1;
int mid;
while(first<=last){
	mid=(first+last)/2;
	if(e>a[mid]){
	first=mid+1;	
	}
	else if(e<a[mid]){
		last=mid-1;
	}
	else{
		printf("element if found at %d",mid);
		break;
	}
	mid=(first+last)/2;
}
if(first>last){
printf("element not found:(");	
}

}
