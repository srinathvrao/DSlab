#include "header.h"
void bubblesort(struct stud *s1[],int n)
{
    
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            
            if(s1[j]->rno>s1[j+1]->rno)
            {
               struct stud*m;
               m=s1[j];
               s1[j]=s1[j+1];
               s1[j+1]=m;
            }
            else
            ;
        }
        display(s1,n);
    }
    finaldisplay(s1,n);
}

void display(struct stud* m[],int n)
{
    int i=0;
    struct stud *u;
    printf("\nroll no of students according to increasing order  is");
    while(i<n)
    {
        u=m[i];
        printf("\n%d",u->rno);
        printf(" ");
        i++;
    }
    printf("\n");
}

void finaldisplay(struct stud* m[],int n)
{
     int i=0;
    struct stud *u;
    printf("\nstudent details in sorted order are");
    while(i<n)
    {
        u=m[i];
        printf("\n");
        puts(u->name);
        printf("%d",u->rno);
        printf("\n%d",u->marks);
        i++;
    }
    printf("\n");  
}

void save(struct stud*u,int n)
{
    s[n]=u;
}
//bubble sort ends 

//radix sort begins
void countsort(int arr[],int n,int e)
{
int i;
int out[6]={0};
int occ[10]={0};

for(i=0;i<n;i++)
occ[(arr[i]/e)%10]++;

for(i=1;i<10;i++)
occ[i]+=occ[i-1];

for(i=9;i>0;i--)
{
    occ[i]=occ[i-1];
}
occ[0]=0;


for(i=0;i<n;i++)
{
    out[occ[(arr[i]/e)%10]]=arr[i];
    occ[(arr[i]/e)%10]++;
}

for(i=0;i<n;i++)
{
    printf("%d",out[i]);
    printf(" ");
}
printf("\n");

for(i=0;i<n;i++)
arr[i]=out[i];

}

int max(int ar[],int n)
{
int a,i;
a=ar[0];
for(i=1;i<n;i++)
{
    if(ar[i]>a)
    a=ar[i];
}
return a;
}

void radixsort(int ar[],int n)
{
int m,e;

m=max(ar,n);

for(e=1;(m/e)>0;e*=10)
countsort(ar,n,e);
}
//radix sort ends

//shell sort begins
int shellSort(int arr[], int n) 
{ 
	int gap,i;
    for (gap = n/2; gap > 0; gap /= 2) 
    { 
        for (i = gap; i < n; i += 1) 
        { 
            int temp = arr[i]; 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
        printArray(arr,n);
    } 
    return 0; 
} 
  
void printArray(int arr[], int n) 
{ 
    printf("\n");
    int i;
    for (i=0; i<n; i++) 
        {
        printf("%d",arr[i]);
        printf(" ");
        }
} 

//shell sort ends

//insertion sort begins
struct emp
{
    char name[15];
    int eno,sal;
}*e[15];

struct emp em[15];

void insertionsort(struct emp *e1[],int n)
{
    
    int i,j;
    struct emp*no;
    for(i=1;i<n;i++)
    {
        no=e1[i];
        j=i-1;
        while(j>=0&&((e1[j]->eno)>(no->eno)))
        {
           e1[j+1]=e1[j];
           j--;
        }
        e1[j+1]=no;
        disp(e1,n);
    }
    finaldisp(e1,n);
}

void disp(struct emp* m[],int n)
{
    int i=0;
    struct emp *u;
    printf("\nemp no of employees according to increasing order is");
    while(i<n)
    {
        u=m[i];
        printf("\n%d",u->eno);
        printf(" ");
        i++;
    }
    printf("\n");
}

void finaldisp(struct emp* m[],int n)
{
     int i=0;
    struct emp *u;
    printf("\nemployee details in sorted order are");
    while(i<n)
    {
        u=m[i];
        printf("\n");
        puts(u->name);
        printf("%d",u->eno);
        printf("\n%d",u->sal);
        i++;
    }
    printf("\n");  
}

void sav(struct emp*u,int n)
{
    e[n]=u;
}

//insertion sort ends

//selection sort begins here

void selectionSort(char arr[][MAX_LEN], int n) 
{ 
    int i, j, min_idx,u; 
    char minStr[MAX_LEN]; 
    for (i = 0; i < n-1; i++) 
    { 
        int min_idx = i; 
        strcpy(minStr, arr[i]); 
        for (j = i+1; j < n; j++) 
        { 
            if (strcmp(minStr, arr[j]) > 0) 
            { 
                strcpy(minStr, arr[j]); 
                min_idx = j; 
            } 
        } 
        if (min_idx != i) 
        { 
            char temp[MAX_LEN]; 
            strcpy(temp, arr[i]); 
            strcpy(arr[i], arr[min_idx]); 
            strcpy(arr[min_idx], temp); 
        } 
        for (u=0; u< n; u++) 
         printf("%s \n", arr[u]); 
        printf("\n"); 
    } 
} 

//selection sort ends here 

