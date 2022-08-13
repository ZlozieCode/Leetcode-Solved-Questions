class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        
        int i=0;
        int j=0;
        int k=0;
        
        int c1=0;
        for(int i=0;i<N1;i++){
            c1+=S1[i];
        }
        int c2=0;
        for(int i=0;i<N2;i++){
            c2+=S2[i];
        }
        int c3=0;
        for(int i=0;i<N3;i++){
            c3+=S3[i];
        }
        
        while(i<N1 && j<N2 && k<N3){
            
            if(c1==c2 && c2==c3){
                return c1;
            }
            
            else if(c1>c2 || c1>c3){
                c1-=S1[i];
                i++;
            }
            
            else if(c2>c1 || c2>c3){
                c2-=S2[j];
                j++;
            }
            
            else if(c3>c2 || c3>c1){
                c3-=S3[k];
                k++;
            }
        }
        
        return 0;
    }
    };
