class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        string vowel="";
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                vowel+=s[i];
            }
        }
        int k=0;
        sort(vowel.begin(),vowel.end());  
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
              s[i]=vowel[k++];
            }
        }
        return s;
    }
    bool isvowel(char c){
        char temp = tolower(c);
        if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'){
            return true;
        }
        return false;
    }
};