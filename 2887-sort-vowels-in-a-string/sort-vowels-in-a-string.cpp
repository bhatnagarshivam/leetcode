class Solution {
public:
    string sortVowels(string s) {
     string str ="";
     int k =0;
       for(auto c : s){
        if(Isvowel(c)){
            str+=c;
        }
       }
       sort(str.begin(),str.end());
       for(auto &c : s){
        if(Isvowel(c)){
          c=str[k++];
        }
       }
       return s;
       }
     bool Isvowel(char c) {
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
     }     
};