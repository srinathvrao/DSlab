#include"graphapp.h"
void get_matrix()
{
	printf("Enter the no of vertices:\n");
    scanf("%d",&n);
 
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
	{
        printf("Enter row %d\n",i+1);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    
}

void degree()
{
	for(i=0;i<n;i++)
	{
        deg[i]=0;
        visited[i]=0;
    }
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
		    deg[i]=deg[i]+a[j][i];
		}
	}
}

void top_sort()
{
	get_matrix();
	degree();
	
	printf("\nTOPOLOGICAL PATH IS:");
 
    while(count<n)
	{
        for(k=0;k<n;k++)
		{
            if((deg[k]==0) && (visited[k]==0))
			{
                printf("%d ",(k+1));
                visited[k]=1;
            }
 
            for(i=0;i<n;i++)
			{
                if(a[i][k]==1)
                    deg[k]--;
            }
        }
 
        count++;
    }
}
