#include "imple.c"
void main()
{
    int ar[15],p,m=1,n=0,i,g=1;
    char arr[][MAX_LEN] = {"Wearethe", "studentsof", 
                                                    "IT"}; 
    while(g==1)
    {
    printf("\nSORT MENU");
    printf("\n1.BUBBLE SORT\n2.INSERTION SORT\n3.SELECTION SORT\n4.SHELL SORT\n5.RADIX SORT\n0.Exit");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&p);
    switch(p)
    {
        case 1: 
                n=0;
                m=1;
                while(m==1)
                {
                printf("\nEnter the name of the student");
                scanf("%s",st[n].name);
                printf("\nEnter the rollno of the student");
                scanf("%d",&st[n].rno);
                printf("\nEnter the marks of the student");
                scanf("%d",&st[n].marks);
                save(&st[n],n);
                n++;
                printf("\nEnter 1 to enter another student detail(max 15)");
                scanf("%d",&m);
                }
                bubblesort(s,n);
                break;
        case 2: 
                n=0,m=1;
                while(m==1)
                {
                printf("\nEnter the name of the employee");
                scanf("%s",em[n].name);
                printf("\nEnter the empno of the employee");
                scanf("%d",&em[n].eno);
                printf("\nEnter the salary of the employee");
                scanf("%d",&em[n].sal);
                sav(&em[n],n);
                n++;
                printf("\nEnter 1 to enter another employee detail(max 15)");
                scanf("%d",&m);
                }
                insertionsort(e,n);
                break;
        case 3:
                n = sizeof(arr)/sizeof(arr[0]); 
                printf("Given array is\n"); 
                for (i = 0; i < n; i++) 
                printf("%d: %s \n", i, arr[i]); 
                selectionSort(arr, n); 
                printf("\nSorted array is\n"); 
                for (i = 0; i< n; i++) 
                printf("%s \n", arr[i]); 
                break;
                
        case 4:
                printf("Enter the elements for sort (max 10)");
                n=0;
                m=1;
                while(m==1)
                {
                scanf("%d",&ar[n]);
                n++;
                printf("\n Do you wish to enter more (1 for yes) ?");
                scanf("%d",&m);
                }
                shellSort(ar,n);
                break;
                
        case 5:   
                printf("Enter the elements for sort (max 10)");
                n=0;
                m=1;
                while(m==1)
                {
                scanf("%d",&ar[n]);
                n++;
                printf("\n Do you wish to enter more (1 for yes) ?");
                scanf("%d",&m);
                }
                radixsort(ar,n);
                break;
                
        case 0: g=0;
                break;
        default: printf("\nInvalid Choice.\n");
    } 
    }
}

