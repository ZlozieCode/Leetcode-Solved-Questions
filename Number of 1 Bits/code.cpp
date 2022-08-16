int setBits(int N) {
        // Write Your Code here
         
        int c=0;
        int x;
        
        while(N>0){
            N=N&N-1;
            c++;
        }
        return c;
    }
