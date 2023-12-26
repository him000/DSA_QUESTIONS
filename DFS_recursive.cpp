class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(int current_vertex,vector<int> adj[], vector<int>& answer,bool visited[])
    {
        answer.push_back(current_vertex);
        visited[current_vertex] = true;
        /*Visit all the adjacents of current node */
        for(int i=0;i < adj[current_vertex].size() ;i++)
        {
          if(visited[adj[current_vertex][i]] == false)
          {
            DFS(adj[current_vertex][i],adj,answer,visited);
          }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        // visisted array to tell if a vertex is visited or not
        bool visited[V];
        /*Reset visited to false */
        memset(visited,false,sizeof(visited)); 
        /*Vector to store the answer  */
        vector<int> answer;
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
                DFS(i,adj,answer,visited);
            }
        }
        
        return answer;
        
    }
};
