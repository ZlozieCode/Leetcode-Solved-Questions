long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        long long int x=0;
        long long int y=0;
        for(int i=0;i<n;i++){
            int t=arr[i];
            if(i%2==0){
                
                x=x*10+t;
            }
            else{
                
                y=y*10+t;
            }
        }
       
        return x+y;
    }
