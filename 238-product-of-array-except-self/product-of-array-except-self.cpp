class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixProd;
        vector<int>suffixProd;
        int prefixprod=1;
        int suffixprod=1;
        prefixProd.push_back(prefixprod);
        for(int i=1;i<n;i++){
             prefixprod*=nums[i-1];
               prefixProd.push_back(prefixprod);
        }
         suffixProd.push_back(suffixprod);
        for(int i=n-2;i>=0;i--){
             suffixprod*=nums[i+1];
               suffixProd.push_back(suffixprod);
        }
        reverse(suffixProd.begin(),suffixProd.end());
        for(int i=0;i<n;i++){
            prefixProd[i]=prefixProd[i]*suffixProd[i];
        }
        return prefixProd;
    }
};