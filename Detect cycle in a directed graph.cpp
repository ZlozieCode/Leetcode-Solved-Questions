// q -> https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
        // code here
    bool dfs(vector<int> adj[],bool vis[],int dfs_check[],int s){
        
        vis[s]=1;
        dfs_check[s]=1;
        
        for(int x:adj[s]){
            
            if(vis[x]==0){
                vis[x]=1;
                if(dfs(adj,vis,dfs_check,x))
                    return 1;
            }
            
            if(dfs_check[x]==1)return 1;
            
        }
        dfs_check[s]=0; 
        
        return 0;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        bool vis[V+1];
        int dfs_check[V+1];
        
        for(int i=0;i<=V;i++){
            vis[i]=0;
            dfs_check[i]=0;
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(adj,vis,dfs_check,i))
                    return 1;
            }
        }
        
        return 0;
    }
    
};
