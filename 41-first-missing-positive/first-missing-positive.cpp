class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int k=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
         if(nums[i]<k)  continue;
         if(nums[i]==k)   k++;
         else if(nums[i]>k) return k;
        }
        return k;
    }
};