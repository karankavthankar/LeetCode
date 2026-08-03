class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        bool ans=false;
        
        while(row<=matrix.size()-1 && col>=0){
            if(matrix[row][col]>target){
                col=col-1;
            }else if(matrix[row][col]==target){
                ans=true;
                break;
            }else{
                row=row+1;
            }
        }
        return ans;
    }
};