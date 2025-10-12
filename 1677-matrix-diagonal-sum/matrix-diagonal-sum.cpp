class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int result=0;
        int Lcol=0,Rcol=m-1;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==Lcol|| j==Rcol){
             result+=mat[i][j];
            }
        }
        Lcol++,Rcol--;
       }
       return result;
    }
};