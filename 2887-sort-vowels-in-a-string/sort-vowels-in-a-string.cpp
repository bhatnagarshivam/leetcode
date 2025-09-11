class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowel;
        int k = 0;
          for(int i=0;i<s.size();i++){
            char c = s[i];
            if(isVowel(c)){
                vowel.push_back(s[i]);
            }
          }
          sort(vowel.begin(),vowel.end());
            for(int i=0;i<s.size();i++){ 
                char c = s[i];
                if(isVowel(c)){
                    s[i]=vowel[k++];
                }
            }
            return s;
    }
    bool isVowel(char c )
{
    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')) return true;
    return false;
}             
};