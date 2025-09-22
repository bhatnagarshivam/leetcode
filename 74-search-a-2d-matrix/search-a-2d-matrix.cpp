class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top=0;
        int bottom=n-1;
        int row=-1;
        while(top<=bottom){
            int mid = (top+bottom)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            if(matrix[mid][0]<target){
                row=mid;
                top=mid+1;
            }
            else{
                bottom=mid-1;
            }
        }
        if(row==-1)  return false;
        int left=0;
        int Right=m-1;
        while(left<=Right){
            int mid=(left+Right)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            if(matrix[row][mid]<target){
                left=mid+1;
            }
            else{
                Right=mid-1;
            }
        }
        return false;
        
    }
};