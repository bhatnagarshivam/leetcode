class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
      int n = words.size();
      vector<string>result;
      result.push_back(words[0]);
      for(int i=1;i<n;i++){
        string prev=result.back();
        string current=words[i];
         string sortprev=prev;
         string sortcurrent=current;
         sort(sortprev.begin(),sortprev.end());
         sort(sortcurrent.begin(),sortcurrent.end());
         if(sortprev!=sortcurrent){
            result.push_back(current);
         }
      }
      return result;
    }
};