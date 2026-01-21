class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
         int max_wealth=0,curr_wealth=0;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                curr_wealth+=accounts[i][j];
            }
            max_wealth=max(max_wealth,curr_wealth);
            curr_wealth=0;
         }
         return max_wealth;
    }
};