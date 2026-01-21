class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>cnt;
        vector<int>ans;
        for(int num:nums){
            cnt[num]++;
            if(cnt[num]==2) ans.push_back(num);
        }
        return ans;
    }
};