class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int m = s.size();
        int j=0;
        int count =0;
        for(int i=0;i<n;i++){
          if(s[j]==t[i]){
          count+=1;
          j++;
          }
        }
        if (count==m){
            return true;
        }
       return false; 
    }
};