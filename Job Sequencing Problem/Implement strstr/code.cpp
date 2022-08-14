int strstr(string s, string x)
{
     //Your code here
     int a=s.size();
     int b=x.size();
     int i=0;
     int j=0;
     string t="";
     
     while(j<=a){
         
         if(j-i+1<=b){
             t+=s[j];
             j++;
         }
         
         else if(t==x){
             return i;
         }
         
         else {
             
             t.erase(t.begin()+0);
             t+=s[j];
             j++;
             i++;
         }
     }
     
     return -1;
}
