#include<stdio.h>
void depth_first(int v);
typedef enum boolean{false,true}bool;
int n,a[10][10];
bool visited[10];
void depth_first(int v)
{
int i,stack[10],top=-1,pop;
top++;
stack[top]=v;
while(top>=0)
{
pop=stack[top];
top--;
if(visited[pop]==false)
{
printf("%d",pop);
visited[pop]=true;
}
for(i=n;i>=1;i--)
{
if(a[pop][i]==1 && visited[i]==false)
{
top++;
stack[top]=i;
}
}
}
}
