/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        int i = 0, j,k;
        result[i].push_back(1);
        if(numRows == 1)
            return result;
        while(i+1 != numRows)
        {
            j=1;
            ++i;
            result[i].push_back(1);
            while(j<i)
            {
                k = result[i-1][j-1] + result[i-1][j];
                result[i].push_back(k);
                ++j;
            }
            result[i].push_back(1);
        }
        return result;
        
    }
};
// @lc code=end

