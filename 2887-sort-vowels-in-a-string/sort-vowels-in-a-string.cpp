class Solution {
public:
    string sortVowels(string s) {
    int n = s.size();
    string temp="";
    for(int i=0;i<n;i++){
        if(isvowel(s[i])){
            temp+=s[i];
        }
    }
    sort(temp.begin(),temp.end());
        int k=0;
    for(int i=0;i<n;i++){
        if(isvowel(s[i])){
        s[i]=temp[k++];
    }
   } 
   return s;
     } 
     bool isvowel(char c){
         c=tolower(c);
          return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?true:false;
       
     }    
};