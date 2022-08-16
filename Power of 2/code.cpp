
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here  
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
            if(c>1)return false;
        }
        
        return (c==1)?true:false;
        
    }
    };
