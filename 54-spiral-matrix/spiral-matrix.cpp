class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int n =matrix.size();
        int m= matrix[0].size();
        int srow=0,scol=0,erow=n-1,ecol=m-1;
       while(srow<=erow && scol<=ecol){
        //top
        for(int i=srow;i<=ecol;i++){
            result.push_back(matrix[srow][i]);
       }
       //Right
       for(int i=srow+1;i<=erow;i++){
           result.push_back(matrix[i][ecol]);
    }   
       //bottom
       for(int i=ecol-1;i>=scol;i--){
        if(srow==erow) break;
        result.push_back(matrix[erow][i]);
       }

       //left
       for(int i=erow-1;i>srow;i--){
        if(scol==ecol) break;
        result.push_back(matrix[i][scol]);
       }
           srow++,scol++,ecol--,erow--;
       }
       return result;
    }
};