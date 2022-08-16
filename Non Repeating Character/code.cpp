class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n=S.size();
       int x=INT_MAX;
       vector<int>v(256,-1);
       for(int i=0;i<n;i++){
          int t=S[i];
          if(v[t]==-1)
              v[t]=i;
          
          else v[t]=-2;
       }
       
       for(int i=0;i<256;i++){
           if(v[i]>=0){
               x=min(x,v[i]);
           };
       }
       
       char z='$';
       return (x==INT_MAX)?z:S[x];
       
    }
};
