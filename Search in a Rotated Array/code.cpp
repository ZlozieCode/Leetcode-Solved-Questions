   
   int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(l<=h){  
            
            int m=(l+h)/2;
            
            if(A[m]==key)return m;
            
            if(A[l]<=A[m]){
                
                if(key>=A[l] && key<A[m]){
                    h=m-1;
                }
                
                else l=m+1;
            }
            
            else{
                
                if(key>A[m] && key<=A[h]){
                    l=m+1;
                }
                
                else h=m-1;
            }
        }
        
        return -1;
    }
