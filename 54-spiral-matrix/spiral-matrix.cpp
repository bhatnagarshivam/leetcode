class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int srow=0,erow=n-1,scol=0,ecol=m-1;
        vector<int>result;
        while(srow<=erow && scol<=ecol){
       //Up
       for(int i =srow;i<=ecol;i++){
            result.push_back(matrix[srow][i]);
       }
       //Right
       for(int i=srow+1;i<=erow;i++){
        result.push_back(matrix[i][ecol]);
       }
       //Down
       for(int i=ecol-1;i>=scol;i--){
        if(srow==erow) break;
        result.push_back(matrix[erow][i]);
       }
       //Left
       for(int i=erow-1;i>srow;i--){
        if(scol==ecol) break;
        result.push_back(matrix[i][scol]);
       }
       srow++,erow--,scol++,ecol--;
        }
        return result;
    }
};