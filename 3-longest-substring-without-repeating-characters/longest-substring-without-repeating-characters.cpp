class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_length=0;
        int j=0;
        unordered_map<char,int>Count;
        for(int i=0;i<n;i++){
            Count[s[i]]++;
            while(Count[s[i]]>1){
                    Count[s[j]]--;
                j++;
            }
                max_length=max(max_length,i-j+1);
            }
        return max_length;
    }
};