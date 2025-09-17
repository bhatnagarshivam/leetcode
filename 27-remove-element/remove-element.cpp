class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
         while(find(nums.begin(),nums.end(),val)!=nums.end()){
            auto it = find(nums.begin(),nums.end(),val);
            nums.erase(it);
         }
         return nums.size();
    }
};