class Solution {
public:
    string makeGood(string s) {
        stack<int>str;
        int n = s.size();
        for(int i=0;i<n;i++){
           if(!str.empty() && tolower(str.top())==tolower(s[i]) && str.top()!=s[i]){
            str.pop();
           }
           else{
            str.push(s[i]);
           }
        }
        string st="";
        while(!str.empty()){
              st+=str.top();
              str.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};