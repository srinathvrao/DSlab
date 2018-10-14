#include "graph_c.c"
void main()
{
	int ch,ch1,a,b,ver,i,ver1;
	while(1)
	{
		printf("\n GRAPH  TRAVERSAL :");
		printf("\n1.initialize using adjacency matrix\n2.display the matrix\n3.dfs traversal");
		printf("\n4.bfs traversal\n5.exit");
		printf("\n enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			//case 1:adj_list();break;
			case 1:
					//printf("Enter number of vertices : ");
    				//scanf("%d",&n);
    				printf("\n 5X5 adjacency matrix:");
    				init();
    				create_graph();
					break;
			
			case 2:print();break;
			case 3:
					
					printf("\n enter the source vertex: ");
					scanf("%d",&ver);
					for(i=1;i<=V;i++)
						visited[i]=0;
					dfs(ver);
					break;
			case 4:
					init_bfs();
					printf("\n enter the source vertex: ");
					scanf("%d",&ver1);
					bfs(ver1);
					break;
			case 5:exit(0);break;
			default:printf("\n invalid choice");
			
		}
	}
}
