class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string>result;
        result.push_back(words[0]);
        for(int i=1;i<n;i++){
            string prev=result.back();
            string current=words[i];
            string prevsort=prev;
            string currsort=current;
            sort(prevsort.begin(),prevsort.end());
            sort(currsort.begin(),currsort.end());
            if(prevsort!=currsort) result.push_back(current);
        }
        return result;
    }
};