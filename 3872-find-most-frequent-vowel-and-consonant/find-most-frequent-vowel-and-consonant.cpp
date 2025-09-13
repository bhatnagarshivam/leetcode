class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        int  maxVowel=0;
        int maxCons=0;
       unordered_map<char,int>str;
       for(int i=0;i<n;i++){
        str[s[i]]=count(s.begin(),s.end(),s[i]);
       }
       for(auto c:str){
        char ch =c.first;
       
         if((ch=='a')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='e')){
            maxVowel=max(maxVowel,c.second);
         }
         else{
            maxCons=max(maxCons,c.second);
         }
         
       }
        return maxVowel + maxCons;
    }
};