class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int Rcolor_count=0;
        int Wcolor_count=0;
        int Bcolor_count=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                Rcolor_count++;
            }
            else if(nums[i]==1){
                Wcolor_count++;
            }
            else{
                Bcolor_count++;
            }
        }

        for(int i=0;i<n;i++){
            if(Rcolor_count!=0){
                nums[i]=0;
                Rcolor_count--;
                
            }
            else if(Wcolor_count!=0){
                nums[i]=1;
                Wcolor_count--;
             
            }
            else{
                nums[i]=2;
            }
        }
        
    }
};