class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int minv=INT_MAX;
    	int maxv=INT_MIN;
    	
    	for(int i=0;i<N;i++){
    	    minv=min(minv,A[i]);
    	    maxv=max(maxv,A[i]);
    	}
    	
    	return maxv+minv;
    }

};
