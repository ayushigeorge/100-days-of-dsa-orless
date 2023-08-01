class Solution {
  public:
  
  // dfs function


  void dfs(vector<int> adj[], map<int,bool> &visited, int node, vector<int> & ans ){
      ans.push_back(node);   // store traversed node in ans vector
      visited[node]= true;     // mark node as visited
      for( auto e : adj[node]){

/* for every node in adjacency list(neighbourhood) , applying dfs recursively if it has not been already traversed        */
          if(!visited[e]){
              dfs(adj,visited,e,ans);
          }
          
      }
      
      
  }


    // Function to return a list containing the DFS traversal of the graph.


    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    // adj list is given
    // map to keep track of visited node ( initialized as false for every node) ->  map<int,bool> visited;


    vector<int> ans;   // vector to store the traversed nodes
    
       dfs(adj,visited,0,ans);  // Calling dfs for the first node
     
    return ans;    
    }
};
