class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool cmp(pair<int,int>a, pair<int,int>b){
        if(a.second==b.second){
            a.first<b.first;
        }
        
        return a.second>b.second;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        vector<pair<int,int>>p;
        
        for(int i=0;i<n;i++){
            p.push_back({arr[i].dead,arr[i].profit});
        }
        sort(p.begin(),p.end(),cmp);
        
        int c=1;
        int t=p[0].second;
        int r=p[0].first;
        vector<int>v(101,0);
        v[r-1]=1;
        
        for(int i=1;i<n;i++){
            
            for(int j=p[i].first-1;j>=0;j--){
                if(v[j]==0){
                    c++;
                    t+=p[i].second;
                    v[j]=1;
                    break;
                }
            }
            
        }
        
        
        return {c,t};
    } 
    };
