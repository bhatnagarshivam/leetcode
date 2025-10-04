class Solution {
public:
    string sortVowels(string s) {
       int n = s.size();
       string str="";
       for(char c:s){
        if(isvowel(c)){
            str+=c;
        }
       }
       sort(str.begin(),str.end());
       int i=0;
     for(char & c :s ){
        if(isvowel(c)){
         c=str[i++];
        }
     }
     return s;
    }

       bool isvowel(char c){
        char str = tolower(c);
        if(str=='a' ||str=='e' ||str=='i' ||str=='o' ||str=='u'){
            return true;
        }
        return false;
       }
           
};