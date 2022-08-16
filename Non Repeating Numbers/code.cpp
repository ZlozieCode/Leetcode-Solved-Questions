vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xor_sum=0;
        for(int x:nums){
            xor_sum^=x;
        }
        
        //Xor
        //00 ->0 
        //01 ->1
        //10 ->1
        //11 ->0
        
        int r1=0;
        int r2=0;
        
        int y=xor_sum & ~(xor_sum-1); //gives right most set bit
        
        for(int x:nums){
            
            if((x&y)!=0){
                r1^=x;
            }
            
            else r2^=x;
        }
        if(r1>r2)return {r2,r1};
        return {r1,r2};
    
    }
