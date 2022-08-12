class Solution {
public:
    
    int index(vector<int>& nums){
        
        int n=nums.size();
        int l=0;
        int r=n-1;
        
        while(l<=r){
            
            int m=(l+r)/2;
            int prev=(m-1+n)%n;
            int next=(m+1)%n;
            
            if(nums[m]<=nums[prev] && nums[m]<=nums[next])return m;
            
            if(nums[m]<=nums[r]){
                r=m-1;
            }
            
            else if(nums[l]<=nums[m]){
                l=m+1;
            }
        }
        
        return 0;
    }
    int findMin(vector<int>& nums) {
        
        int i=index(nums);
        return nums[i];
    }
};