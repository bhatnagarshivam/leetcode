class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>result;
      int n = nums1.size();
      int m =nums2.size();
      for(int i=0;i<m;i++){
        if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end()){
            result.insert(nums2[i]);
        }
      }
      vector<int>result1;
      for(auto p : result){
        result1.push_back(p);
      }
      return result1;
    }
};