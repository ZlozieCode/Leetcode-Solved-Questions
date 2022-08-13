class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        long long t=0;
        for(int i=0;i<N;i++){
            t+=abs(A[i]-B[i]);
        }
        
        return t;
    }
};
