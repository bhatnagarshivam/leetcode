class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int MaxWealth=0,CurrWealth=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                CurrWealth+=accounts[i][j];
        }
        MaxWealth=max(MaxWealth,CurrWealth);
        CurrWealth=0;
        }
        return MaxWealth;
    }
};