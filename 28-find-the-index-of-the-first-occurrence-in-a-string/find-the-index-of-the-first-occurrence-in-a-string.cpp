class Solution {
public:
    int strStr(string haystack, string needle) {
       if(haystack.size()<needle.size()){
        return -1;}
       else if(haystack.find(needle)==haystack.npos){
        return -1;
       }
       return haystack.find(needle);
    }
};