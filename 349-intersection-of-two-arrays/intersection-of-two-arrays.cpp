class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>result;
      for(int i=0;i<nums2.size();i++){
        if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end()){
            result.insert(nums2[i]);
        }
      }
      return vector<int>(result.begin(),result.end());
    }
};