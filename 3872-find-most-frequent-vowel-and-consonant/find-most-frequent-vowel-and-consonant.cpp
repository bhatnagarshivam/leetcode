class Solution {
public:
    int maxFreqSum(string s) {
       int n = s.size();
       int maxvowelfreq=0,maxconsonantfreq=0;
       map<char,int>freqcount;
       for(int i=0;i<n;i++){
        freqcount[s[i]]++;
       }
       for(auto c:freqcount){
        if(isvowel(c.first)) maxvowelfreq=max(maxvowelfreq,c.second);
        else maxconsonantfreq=max(maxconsonantfreq,c.second);
    }
    return maxvowelfreq+maxconsonantfreq;
    }
    bool isvowel(char c){
        c=tolower(c);
        return (c=='a'||c=='e'||c=='o'||c=='i'||c=='u')?true:false;
    }
};