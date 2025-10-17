class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n =nums.size();
        int k=1;
        sort(nums.begin(),nums.end(),greater<int>());
        if(n<3){
            return nums[0];
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                k++;
            }
            if(k==3){
                return nums[i+1];
            }
        }
        return nums[0];
    }
};