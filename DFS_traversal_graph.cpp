 // undirected graph 
class Solution {
private:
    void DFS(int node, vector<int> adj[], int vis[], vector<int> &dfsans)
    {
        vis[node] = 1;
        dfsans.push_back(node);
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                DFS(it,adj,vis,dfsans);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int start = 0;
        
        vector<int> dfsans;
        DFS(start,adj,vis,dfsans);
        
        return dfsans;
        
        
    }
};
