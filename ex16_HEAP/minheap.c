#include"minfunc.c"

int main(){

int ch,a,d,n,i,k;
while(1)
    {
        printf("\n\n----Menu ----");
        printf("\n1.Build\n2.Insert\n3.Delete Min\n4.Delete\n5.Find min\n6.EXIT");
        printf("Enter your choice(1-9):");
        scanf("%d",&ch);
 
        switch(ch)
        {
            case 1:
            		printf("\nenter size");
            		scanf("%d",&n);
            		H = Initialize(Max);
            		H->Size=n;
				 	printf("\nEnter elements");
            		for(i=1;i<=n;i++)
            		{
						scanf("%d",&H->Elements[i]);
						
					}
					H=BuildHeap(H);
					printf("\nHeap looks like :");
					for(i=1;i<=n;i++)
					{
						printf("%d",H->Elements[i]);
					}
					break;
                    
            case 2: printf("\nEnter element to insert");
            		scanf("%d",&a);
            		Insert(a,H);
                    
                    printf("\nHeap looks like :");
					for(i=1;i<=H->Size;i++)
					{
						printf("%d",H->Elements[i]);
					}
					break;
 
            case 3: d=DeleteMin(H);
            		printf("\nDeleted Element : %d", d);
                    break;
            
			case 4:printf("\nenter position to delete");
					scanf("%d",&k); 
					d = Delete(H,k);
					printf("\nDeleted Element : %d",d);
					printf("\nHeap looks like :");
					for(i=1;i<=H->Size;i++)
					{
						printf("%d",H->Elements[i]);
					}
					break;
			case 5: a = FindMin(H);
					printf("\nMinimum Element : %d", a);
					break;
					
			case 6: exit(0);
			
	}
}
return 0;
}

