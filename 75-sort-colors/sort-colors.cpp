class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
       int red_color=0;
       int white_color=0;
       int blue_color=0;
       for(int i=0;i<n;i++){
        if(nums[i]==0){
            red_color++;
        }
        else if(nums[i]==1){
            white_color++;
        }
        else{
            blue_color++;
        }
       }
       for(int i=0;i<n;i++){
        if(red_color!=0){
            nums[i]=0;
            red_color--;
        }
        else if(white_color!=0){
            nums[i]=1;
            white_color--;
        }
        else{
            nums[i]=2;
        }
       }
    }
};