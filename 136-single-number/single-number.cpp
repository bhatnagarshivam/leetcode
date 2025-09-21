class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;
        for(auto i :nums){
            freq[i]++;
        }
        for(auto c : freq){
            if(c.second==1){
                return c.first;
            }
        }
        return 0;
    }
};