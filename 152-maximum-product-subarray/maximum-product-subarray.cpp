class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =nums.size();
        if(n==1){
            return nums[0];
        }
        int current_prod=1,max_prod=INT_MIN;
        for(int i=0;i<n;i++){
            current_prod*=nums[i];
           max_prod= max(max_prod,current_prod);
            if(current_prod==0){
                current_prod=1;
            }
        }
        current_prod=1;
        for(int i=n-1;i>0;i--){
            current_prod*=nums[i];
           max_prod= max(max_prod,current_prod);
            if(current_prod==0){
                current_prod=1;
            }
        }
        return max_prod;
    }
};