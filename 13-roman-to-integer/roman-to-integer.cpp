class Solution {
public:
    int romanToInt(string s) {
    int n = s.size();
    int result=0;
    unordered_map<char,int>Roman{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
     for(int i=0;i<n;i++){
        if(i+1<n && Roman[s[i]]<Roman[s[i+1]])   result-=Roman[s[i]];
        else  result+=Roman[s[i]];
     }
     return result;
    }
};