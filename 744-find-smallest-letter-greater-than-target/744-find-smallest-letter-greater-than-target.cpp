class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int t=target - '0';
        
        for(char x:letters){
            
            int y=x-'0';
            if(y>t)return x;
        }
        
        return letters[0];
    }
};