#include<stdio.h>
#include<stdlib.h>
#define V 5
#define max 25
int adj[V][V],visited[V], state[V];
int q[V],front=0,rear=-1;
int ch;
void init();
void create_graph();
void print();
void dfs(int);
void enq(int data);
int QE();
int deq();
void init_bfs();
void bfs(int i);
