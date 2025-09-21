class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int result=0;
        int currDel=-1;
        while(!grid[0].empty()){
            int maxDel=-1;
        for(int i=0;i<grid.size();i++){
                
            auto Max = max_element(grid[i].begin(),grid[i].end());
            currDel=*Max;
            grid[i].erase(Max);
            maxDel=max(maxDel,currDel);
      
        }
        result+=maxDel;
        
        }
       return result;
    }
};