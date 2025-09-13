class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int,int>>p;
        int left = 0;
        int Right=nums.size()-1;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        while(left<Right){
            if((p[left].first+p[Right].first)>target){
                Right--;
            }
            if((p[left].first+p[Right].first)<target){
                left++;
            }
            if((p[left].first+p[Right].first)==target){
                result.push_back(p[left].second);
                result.push_back(p[Right].second);
                return result;
            }
        }
        
           return result;
    }
};