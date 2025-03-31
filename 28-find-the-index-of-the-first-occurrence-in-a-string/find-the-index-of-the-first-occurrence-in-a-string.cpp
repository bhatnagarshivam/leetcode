class Solution {
public:
    int strStr(string haystack, string needle) {
      if(needle.empty()){
        return -1;
      }
      int n=haystack.size();
      int m=needle.size();
      for(int i=0;i<n;i++){
        if(haystack.substr(i,m)==needle){
            return i;
        }
      }
       return -1; 
    }
};