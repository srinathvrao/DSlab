#include<stdio.h>
#include<conio.h>
#include "depth.h"
int n,a[10][10];
bool visited[10];
void main()
{
int i,j,v;
printf("Enter the no. of nodes in the graph\n");
scanf("%d",&n);
printf("Enter the adjacency matrix \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The adjacency matrix shown as\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Enter the starting node for Depth First search\n");
scanf("%d",&v);
for(i=1;i<=n;i++){
visited[i]=false;
}
depth_first(v);
getch();
}

