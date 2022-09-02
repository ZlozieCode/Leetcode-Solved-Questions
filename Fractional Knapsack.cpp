// q - https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(pair<double,int>a,pair<double,int>b){
        
        return a.first>b.first;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>>v;
        
        for(int i=0;i<n;i++){
            double d=(double)arr[i].value/arr[i].weight;
            int g=arr[i].weight;
            v.push_back({d,g});
        }
        sort(v.begin(),v.end(),cmp);
        double p=0;
        int i=0;
        
        
        while(W>0 && i<n){
            
            if(W>=v[i].second){
                W-=v[i].second;
                p+=v[i].first*v[i].second;
            }
            
            else if(W<v[i].second){
                //double l=W
                p+=v[i].first*W;
                break;
                //W=0;
            }
            i++;
        }
        
        return p;
    }
        
};
