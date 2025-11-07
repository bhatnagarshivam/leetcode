class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low=0;
        int high=m-1;
        int row=-1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(matrix[mid][0]==target){
                return true;}
            else if(matrix[mid][0]>target){ 
                high=mid-1;}
            else{
                    row=mid;
                    low=mid+1;
            }
        }
        if(row==-1)  return false;
        int left=0;
        int Right=n-1;
        while(left<=Right){
            int mid_row = left + (Right-left) /2 ;
            if(matrix[row][mid_row]==target) return true;
            else if (matrix[row][mid_row]>target) Right=mid_row-1;
            else left=mid_row+1;
        }
        return false;
    }
};