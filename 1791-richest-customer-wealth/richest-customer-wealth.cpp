class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int  n = accounts[0].size();
        int maxWealth=0,currMaxWealth=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                currMaxWealth+=accounts[i][j];
            }
            maxWealth=max(currMaxWealth,maxWealth);
            currMaxWealth=0;
        }
     return maxWealth;   
    }
};