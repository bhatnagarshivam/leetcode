class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int count =0;
      for(int i =0;i<n;i++){
                int j = i+1;
       while(j<n){
        if(nums[i]==nums[j] && (i*j%k==0)){
             count++;
        }
         j++;
       }
      }
      return count;
    }
};