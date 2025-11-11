class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        unordered_map<int,int>Count;
        for(int i=0;i<n;i++){
            Count[nums[i]]++;
            if(Count[nums[i]]==2){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};