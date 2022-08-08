class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int,vector<int>,greater<int>>p;
	    vector<int>ans;
	    
	    for(int i=0;i<n;i++){
	        p.push(arr[i]);
	        if(p.size()>k)p.pop();
	    }
	    
	    while(p.size()>0){
	        ans.push_back(p.top());
	        p.pop();
	    }
	    
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	}
};
