class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char c:s){
            if(isalnum(c)){
                str+=tolower(c);
            }
        }
        string reversed;
        reversed=str;
        reverse(reversed.begin(),reversed.end());
       return str==reversed;
        } 
     
};