class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1) return n;
        int first=0;
        int second=1;
        while(second<nums.size()){
            if(nums[first]==nums[second]){
                nums.erase(nums.begin()+second);

            }
            else{
              first++;
              second++;
            }
        }
        return nums.size();
    }
};