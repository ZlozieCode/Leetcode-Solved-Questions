class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    int v[k];
	    int max_fre=0;
	    for(int i=0;i<k;i++){
	        v[i]=0;
	    }
	    
	    for(int i=0;i<n;i++){
	        v[arr[i]]++;
	    }
	    
	    for(int i=0;i<k;i++){
	        max_fre=max(v[i],max_fre);
	    }
	    
	    for(int i=0;i<k;i++){
	        if(v[i]==max_fre)
	            return i;
	    }
	    
	    return 0;

	}
};
