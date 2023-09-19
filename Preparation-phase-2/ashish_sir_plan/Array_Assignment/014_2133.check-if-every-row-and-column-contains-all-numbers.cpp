/*
 * @lc app=leetcode id=2133 lang=cpp
 *
 * [2133] Check if Every Row and Column Contains All Numbers
 */

// @lc code=start
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            vector<int> v(n,0);
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]>n || v[matrix[i][j]-1]>0)
                    return false;
                else
                    ++v[matrix[i][j]-1];
            }
        }
        for(int j=0;j<n;j++)
        {
            vector<int> v(n,0);
            for(int i=0;i<n;i++)
            {
                if(matrix[i][j]>n || v[matrix[i][j]-1]>0)
                    return false;
                else
                    ++v[matrix[i][j]-1];
            }
        }
        return true;
    }
};
// @lc code=end

