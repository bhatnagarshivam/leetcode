class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        vector<int>result;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==2){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};