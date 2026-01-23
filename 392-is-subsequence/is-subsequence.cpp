class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        if(n==0) return true;
        int count=0;
        int ptr1=0;
        int ptr2=0;
        for(int i=0;i<t.size();i++){
            if(s[ptr1]==t[ptr2]){
                count++;
                ptr1++;
                ptr2++;
            }
            else{
                ptr2++;
            }
            if(count==n) return true;
        }
        return false;
    }
};