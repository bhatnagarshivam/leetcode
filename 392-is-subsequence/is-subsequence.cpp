class Solution {
public:
    bool isSubsequence(string s, string t) {
     int n = s.size();
     int m = t.size();
     int count=0;
     int k = 0;
     for(int i=0;i<m;i++){
     if(s[k]==t[i]){
        count++;
        k++;
     }
     }
     return n==count;
    }
};