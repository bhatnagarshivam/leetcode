class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    vector<int>prefix;
    vector<int>suffix;
    int prefixprod=1;
    int  suffixprod=1;
        prefix.push_back(1);
    for(int i=1;i<n;i++){
         prefixprod *=nums[i-1];
        prefix.push_back(prefixprod);
    }   
    suffix.push_back(1);
    for(int i =n-2;i>=0;i--){
        suffixprod*=nums[i+1];
        suffix.push_back(suffixprod);
    }
    reverse(suffix.begin(),suffix.end());
     for(int i=0;i<n;i++){
        nums[i]=suffix[i]*prefix[i];
     }
     return nums;
    }
};