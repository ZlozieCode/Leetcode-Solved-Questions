int findPosition(int N) {
        // code here
        int k=0;
        int c=0;
        
        while(N>0){
            k++;
            if((N&1)==1){
                c++;
            }
            
            if(c>1)break;
            
            N=N>>1;
        }
        
        return (c==1)?k:-1;
    }
