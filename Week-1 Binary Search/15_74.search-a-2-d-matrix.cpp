/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int end = row*col - 1;
        int start = 0;
        int mid = start + (end - start)/2;
        while(start<=end)
        {
            if(matrix[mid/col][mid%col]==target)
                return true;
            else if(matrix[mid/col][mid%col]<target)
                start=mid+1;
            else
                end = mid-1;
            mid = start + (end - start)/2;
        }
        return false;
    }
};
// @lc code=end

