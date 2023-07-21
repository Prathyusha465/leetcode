class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0;
        int end=m*n-1;
        int mid= s+(end-s)/2;
        while(s<=end)
        {
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]>target)
                end=mid-1;
            else
                s=mid+1;
            mid=s+(end-s)/2;
        }
        return false;
    }
};