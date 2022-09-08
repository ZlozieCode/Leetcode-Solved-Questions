class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
       
        int n=S.size();
        string t="";
        
        for(int i=0;i<n;i++){
            if(S[i]!=S[i+1])t+=S[i];
        }
        
        return t;
    }
};
