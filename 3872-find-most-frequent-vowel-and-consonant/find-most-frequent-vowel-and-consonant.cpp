class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        int maxvowel=0,maxconsonent=0;
        unordered_map<char,int>count;
        for(int i=0;i<n;i++){
            count[s[i]]++;
        }
        for(auto c:count){
            if(isvowel(c.first))  maxvowel=max(maxvowel,c.second);
            else  maxconsonent=max(maxconsonent,c.second);
        }
        return maxvowel+maxconsonent;
    }
    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='u'||c=='o'||c=='i'){
            return  true;
        }
        return false;
    }
};