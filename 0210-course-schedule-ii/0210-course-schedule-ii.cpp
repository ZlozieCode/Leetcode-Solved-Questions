class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n=numCourses;
        int m=prerequisites.size();
       
        vector<int>adj[n];
        vector<int>indegree(n,0);
        
        for(int i=0;i<m;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        int c=0;
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
            {
                c++;
                q.push(i);
            }
        }
        
        vector<int>ans;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(int x:adj[temp]){
                indegree[x]--;
                if(indegree[x]==0)
                {
                    c++;
                    q.push(x);
                }
            }
        }
        vector<int>v;
        
        return c==n?ans:v;
        
    }
};