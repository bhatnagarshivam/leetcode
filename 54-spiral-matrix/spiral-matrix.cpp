class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       int srow=0,scol=0,ecol=m-1,erow=n-1;
       vector<int>result;
       while(srow <= erow && scol <= ecol){
            for(int i=scol;i<=ecol;i++){
                result.push_back(matrix[srow][i]);
            }

            for(int i=srow+1;i<=erow;i++){
                result.push_back(matrix[i][ecol]);
            }

            for(int i=ecol-1;i>=srow;i--){
                if(srow==erow)  break;
                result.push_back(matrix[erow][i]);
            }

            for(int i=erow-1;i>srow;i--){
                if(scol==ecol) break;
                result.push_back(matrix[i][scol]);
            }
            srow++,scol++,ecol--,erow--;
       
       }
       return result;
    }
};