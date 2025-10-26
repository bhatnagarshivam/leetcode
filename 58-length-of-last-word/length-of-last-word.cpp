class Solution {
public:
    int lengthOfLastWord(string s) {
       int n = s.size();
       int k=0;
       int count=0;
       for(int i=n-1;i>=0;i--){
        if(s[i]==' ' && k==0) 
        {continue;
        }
        else if(s[i]==' ' && k==1) 
        {
            return count;
        }
        else{
            k=1;
            count++;
        }
       }
       return count;
    }
};