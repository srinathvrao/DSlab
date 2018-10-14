#include "graph_h.h"
void init()
{
    int i,j;
    for(i =1; i <= V; i++)
        for(j = 1; j <= V; j++)
            
			adj[i][j] = 0;
    //printf("done");
}			
void print()
{
	int r,c,k;
	printf("\nAdjacency matrix\n");
	printf("\t");
		for(k=1;k<=V;k++)
		printf("%d\t",k);
		printf("\n");
     		for (r = 1; r <=V; r++) 
			 {
 	     		printf("%d\t", r);
 	     		for (c = 1; c <=V; c++) 
		  		{
  	        		 printf("%d\t", adj[r][c]);
  	     		}
  	     		printf("\n");
  	   		}
  	   
}			

void dfs(int ver)
{
    int j;
    printf("\n%d",ver);
    visited[ver]=1;
    for(j=1;j<=V;j++)
        if(!visited[j]&&adj[ver][j]==1)
            dfs(j);
}

void init_bfs()
{	int i,j;
	for(i =1; i <= V; i++)
        for(j = 1; j <= V; j++)
            
			state[i]= 0;
}
void enq(int data)
{
rear++;
q[rear]=data;
}

int QE()
{
if(front==rear+1)
return 1;
else
return 0;
}

int deq()
{
if(QE()==0)
{
int data=q[front];
front++;
return data;
}
else
return -1;
}
void bfs(int i)
{
if(state[i]==0)
{
state[i]=1;
int j;
if(i<=5)
printf(" %d",i );
else
{
	printf("\n invalid edge");
	return;
}
for(j=1;j<=V;j++)
{
if(state[j]==0 && adj[i][j]==1)
enq(j);
}
}
int data=deq();
if(data!=-1)
bfs(data);
}
void create_graph()
{
    int count,origin,destin;
    for(count=1; count<=max; count++)
    {
        printf("\nEnter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);
 
        if((origin == -1) && (destin == -1))
            break;
 
        if(origin>V || destin>V || origin<0 || destin<0)
        {
            printf("Invalid edge!\n");
            count--;
        }
        else
        {
            adj[origin][destin] = 1;
        }
    }
}

