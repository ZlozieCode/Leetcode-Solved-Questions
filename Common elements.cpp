// q - https://practice.geeksforgeeks.org/problems/common-elements1132/1

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0;
            int j=0;
            int k=0;
            set<int>ans;
            
            while(i<n1 && j<n2 && k<n3){
                
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                
                else if(A[i]<B[j]){
                    i++;
                }
                
                else if(B[j]<C[k]){
                    j++;
                }
                
                else k++;
            }
            
            vector<int>ans1(ans.begin(),ans.end());
            return ans1;
        }

};
