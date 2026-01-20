class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S,T;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!S.empty()){
                S.pop();
            }
            }
            else{
                S.push(s[i]);
        }
    }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(!T.empty()){
                T.pop();
            }
            }
            else{
                T.push(t[i]);
        }
    }
        return S==T;
    }
};