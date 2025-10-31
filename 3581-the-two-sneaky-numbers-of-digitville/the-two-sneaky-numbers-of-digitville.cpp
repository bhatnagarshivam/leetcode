class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>Digitville;
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
            if(count[nums[i]]==2){
                Digitville.push_back(nums[i]);
            }
        }
       return Digitville; 
    }
};