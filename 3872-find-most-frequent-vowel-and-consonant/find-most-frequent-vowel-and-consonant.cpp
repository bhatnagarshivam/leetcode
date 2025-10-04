class Solution {
public:
int maxvowel=0,maxconsonate=0;
    int maxFreqSum(string s) {
map<char,int>freq;
   for(char c : s){
    freq[c]++;
   }
for(auto p: freq){
    if(isvowel(p.first)){
        maxvowel=max(maxvowel,p.second);
    }
    else{
        maxconsonate=max(maxconsonate,p.second);
    }
}
return maxvowel+maxconsonate;
    }
    bool isvowel(char c){
        char str=tolower(c);
  if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'){
    return true;
  }
  return false;
    }
};