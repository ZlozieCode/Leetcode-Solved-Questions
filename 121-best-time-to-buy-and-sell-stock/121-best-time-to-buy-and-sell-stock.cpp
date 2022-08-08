class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int min_element=INT_MAX;
        int n=prices.size();
        
        for(int i=0;i<n;i++){
            min_element=min(min_element,prices[i]);
            ans=max(ans,prices[i]-min_element);
        }
        
        return ans;
    }
};