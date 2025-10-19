class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>result;
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                result.push_back(matrix[srow][i]);
            }
            for(int i=srow+1;i<=erow;i++){
                result.push_back(matrix[i][ecol]);
            }
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow) break;
                result.push_back(matrix[erow][i]);
            }
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol)  break;
                result.push_back(matrix[i][scol]);
            }
         srow++,scol++,erow--,ecol--;
        }
       return result; 
    }
};   