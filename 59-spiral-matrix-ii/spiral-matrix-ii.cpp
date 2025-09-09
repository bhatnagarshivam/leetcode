class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>result(n,vector<int>(n,0));
        int count=1;
        int srow=0,scol=0,erow=n-1,ecol=n-1;
        while(srow<=erow && scol<=ecol){
            //Up
            for(int i=srow;i<=ecol;i++){
                result[srow][i]=count++;
            }
            //Right
            for(int i=srow+1;i<=erow;i++){
                result[i][ecol]=count++;
            }
            //down
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow) break;
                result[erow][i]=count++;
            }
            // left
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol) break;
                result[i][srow]=count++;
            }
            srow++,scol++,erow--,ecol--;
        }
        
        return result;
    }
};