class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int MaxWealth=0;
        for(int i=0;i<m;i++){
            int CurrentMax=0;
            for(int j=0;j<n;j++){
               CurrentMax+=accounts[i][j];
            }
            MaxWealth=max(MaxWealth,CurrentMax);
        }
    return MaxWealth; 
    }
};