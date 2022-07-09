class Solution {
public:
    
    void genrate(vector<vector<int>>&ans,vector<int>& nums,vector<int>& subset,int l){
        
        ans.push_back(subset);
        
        for(int i=l;i<nums.size();i++){
            subset.push_back(nums[i]);
            genrate(ans,nums,subset,i+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        int l=0;
        genrate(ans,nums,subset,l);
        
        return ans;
    }
};