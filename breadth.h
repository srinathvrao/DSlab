
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v){
	for (i=1;i<=n;i++){
	
	  if(a[v][i] && !visited[i])
	   q[++r]=i;
}
	if(f<=r) {
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}
