class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        map<int,int>result;
        for(int i=0;i<=n;i++){
            if(find(nums.begin(),nums.end(),i)!=nums.end()){
            result[i]=1;}
            else{
                result[i]=0;
            }
        }
        for(auto i:result){
            if(i.second==0){
                return i.first;
            }
        }
        return 0;
    }
};