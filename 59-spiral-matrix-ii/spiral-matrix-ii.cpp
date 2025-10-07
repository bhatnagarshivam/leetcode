class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>result(n,vector<int>(n));
      int srow=0,scol=0,erow=n-1,ecol=n-1;
      int k=1;
        while(srow <= erow  && scol <= ecol){

            for(int i=scol;i<=ecol;i++){
                result[srow][i]=k++;
            }
             for(int i=srow+1;i<=erow;i++){
                result[i][ecol]=k++;
             }
             for(int i=ecol-1;i>=scol;i--){
                if(srow==erow)  break;
               result[erow][i]=k++;
            } 

             for(int i=erow-1;i>srow;i--){
                if(scol==ecol)  break;
               result[i][scol]=k++;
             }
            srow++,erow--,scol++,ecol--;
             }
        return result;     
    }
};