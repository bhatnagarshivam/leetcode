class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        int num = nums.size();
        for(int i=0;i<num;i++){
            if(nums[i]%3==2) {
                nums[i]++ ;
                ++count;
            }
            else if(nums[i]%3==1){
                nums[i]--;
                ++count;
        }
        }
        return count;
    }
};