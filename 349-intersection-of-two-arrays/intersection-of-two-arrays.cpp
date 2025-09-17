class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>result;
        for(auto val : nums1){
            if(find(nums2.begin(),nums2.end(),val)!=nums2.end()){
              result.insert(val);
            }
        }
      
      return vector<int>(result.begin(),result.end()); 
    }
};