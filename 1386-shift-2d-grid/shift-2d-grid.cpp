class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0){
            return grid;
        }
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>matrix(m,vector<int>(n));
        int num = 0;
        while(num!=k){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(i==m-1 && j==n-1){
                matrix[0][0]=grid[i][j];
            }
            else if(j==n-1){
                matrix[i+1][0]=grid[i][j];
            }
            else{
                matrix[i][j+1]=grid[i][j];
            }
        }
        }
          grid=matrix;
          num++;
        }
        return matrix;
    }
};