class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0 || n==1) return n;
        int start =0;
        int count=0;
        int max_count=0;
       unordered_map<char,int>freq;
       for(int i=0;i<n;i++){
            freq[s[i]]++;
            count++;
            while(freq[s[i]]>1){
                freq[s[start]]--;
             start++;
             count--;
            }
            max_count=max(max_count,count);
       }
       
        return max_count;
     
      }
};