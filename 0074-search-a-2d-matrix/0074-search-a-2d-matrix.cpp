class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int start =0 , end=m*n-1;
        while(start<=end){
            int mid= start+(end-start)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target){
                return 1;
            }
            else if(matrix[row][col]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return 0;
    }
};