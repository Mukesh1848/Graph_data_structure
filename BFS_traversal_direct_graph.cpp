
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      
         vector<int>ans;
         queue<int>q;
         vector<bool> visited(V,false);
         
         q.push(0);
         visited[0] = true;
         
         while(!q.empty()){
             int ele = q.front();
             q.pop();
             ans.push_back(ele);
             
             for(auto it : adj[ele]){
             
             if(!visited[it]){
                 q.push(it);
                 visited[it]=true;
             }
         }
         
         }
        return ans; 
         
    }
};
