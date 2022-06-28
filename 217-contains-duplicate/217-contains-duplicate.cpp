// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
        
//         map<int,int>m;
//         for(int x:nums){
//             m[x]++;
//         }
        
//         for(auto x:m){
//             if(x.second>1)return true;
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])return true;
        }

        return false;
    }
};

