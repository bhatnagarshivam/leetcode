class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // check triplets from largest to smallest
        for(int i = n-1; i >= 2; i--) {
            int a = nums[i-2], b = nums[i-1], c = nums[i];
            if(a + b > c) {
                return a + b + c; // first valid = largest perimeter
            }
        }
        return 0;
    }
};
