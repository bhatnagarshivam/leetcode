class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxcount=0;
       int currentcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currentcount++;
            }
            else{
            maxcount=max(maxcount,currentcount);
            currentcount=0;
        }
        }
        if(currentcount>maxcount){
            maxcount=currentcount;
        }
        return maxcount;
    }
};