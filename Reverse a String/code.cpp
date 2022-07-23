
string reverseWord(string str){
    
  //Your code here
  int n=str.size();
  int i=0;
  int j=n-1;
  
  while(i<=j){
      swap(str[i],str[j]);
      i++;
      j--;
  }
  
  return str;
}
