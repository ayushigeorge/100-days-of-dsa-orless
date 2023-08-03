class Solution {

	public int[] shortestPath(int N,int M, int[][] edges) {
		//Code here
		int dis[]=new int[N];
		for(int i=0; i<N;i++){
		    dis[i]=Integer.MAX_VALUE;
		}
		dis[0]=0;
		Stack<Integer>st=new Stack<>();
		boolean vis[]=new boolean[N];
		for(int i=0; i<N; i++){
		    if(!vis[i]) topsort(edges,vis,i,st);
		}
		while(!st.isEmpty()){
		    int k=st.pop();
		    for(int i=0; i<M; i++){
		        if(edges[i][0]==k && dis[k]!=Integer.MAX_VALUE){
		            if(dis[edges[i][1]]>(dis[k]+edges[i][2]))
		            dis[edges[i][1]]=dis[k]+edges[i][2];
		        }
		    }
		}
		for(int i=0; i<N;i++){
		    if(dis[i]==Integer.MAX_VALUE)
		    dis[i]=-1;
		    
		}
		return dis;
	}
	public void topsort(int edges[][], boolean vis[], int s, Stack<Integer>st){
	    vis[s]=true;
	    for(int i=0; i<edges.length;i++){
	        if(edges[i][0]==s){
	            if(!vis[edges[i][1]]) topsort(edges,vis,edges[i][1],st);
	        }
	    }
	    st.push(s);
	}
}
