class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(vector<int> adj[], bool *vis,int p,int s){
        
        vis[s]=1;
      
        for(int x:adj[s]){
            if(vis[x]==0){
                vis[x]=1;
                if(dfs(adj,vis,s,x))
                    return 1;
            }
            
            else if(x!=p)return 1;
        }
        
        return 0;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+1];
        int p=-1;
        
        for(int i=0;i<V;i++){
            vis[i]=0;
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(adj,vis,p,i))
                    return 1;
            }
        }
        
        return 0;
    }
};
