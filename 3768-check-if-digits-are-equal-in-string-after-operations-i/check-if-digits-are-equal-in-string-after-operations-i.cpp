class Solution {
public:
    bool hasSameDigits(string s) {
        if(s.size()<2)  return false;
        while(s.size()>2){
            string result="";
            for(int i=1;i<s.size();i++){        
                result+=((s[i]-'0')+(s[i-1]-'0'))%10;
            }
            s=result;
        }
        return s[0]==s[1];
    }
};