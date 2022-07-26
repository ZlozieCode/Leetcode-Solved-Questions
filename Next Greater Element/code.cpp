  vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans(n,-1);
        stack<int>s;
        
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(i);
            }
            
            else{
                
                    if(arr[i]<arr[s.top()]){
                        s.push(i);
                    }
                    else{
                        
                        while(!s.empty() && arr[i]>=arr[s.top()]){
                            ans[s.top()]=arr[i];
                            s.pop();
                        }
                        s.push(i);
                    }
                    
            } 
            
        }
        
        return ans;
    }
