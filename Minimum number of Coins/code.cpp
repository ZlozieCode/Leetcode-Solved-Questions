class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int>v={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int>ans;
        int s=v.size();
        
        int i=s-1;
        while(N>0 && i>=0){
            
            if(N>=v[i]){
                int t=N/v[i];
                for(int j=0;j<t;j++){
                    ans.push_back(v[i]);
                }
                N%=v[i];
            }
            
            i--;
        }
        
        return ans;
    }
};
