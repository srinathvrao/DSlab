#include"searchheader.h"

void input() {
	int i;
	for(i=0; i<max; i++) {
		printf("\n enter name: ");
		scanf("%s",ob[i].name);
		printf("\n enter id: ");
		scanf("%d",&ob[i].id);
		printf("\n enter salary: ");
		scanf("%d",&ob[i].sal);

	}
}

void display(struct emp t1) {
	printf("\n name: %s",t1.name);
	printf("\n ID: %d",t1.id);
	printf("\n salary: %d",t1.sal);
}

void searchname(char sname[20]) {
	int i,count=0;
	for(i=0; i<max; i++) {
		count++;
		if(strcmp(ob[i].name,sname)==0) {
			printf("\n match found!\n");
			display(ob[i]);
			break;
		}
	}
	printf("\n the no. of comparisons = %d",count);
}

void sort()
{		int i,j;
		for( i=0; i<max; i++) {
		for( j=0; j<max; j++) {
			if(ob[i].id>ob[j].id) {
				t=ob[i];
				ob[i]=ob[j];
				ob[j]=t;
			}
		}
	}
	printf("\n sorted order:\n");
	for( i=0; i<max; i++) {
		
		display(ob[i]);
	}
}

void searchid(int sid,int l,int u) {
	int mid;

	if(l<=u) 
	{
		count1++;
		mid= (l+u)/2;
		if(ob[mid].id==sid) {
			printf("\n match found!\n");
			display(ob[mid]);
		} else if(sid>ob[mid].id) {
			searchid(sid,0,mid-1);
		} else {
			searchid(sid,mid+1,max);
		}
	
	}
	
}
