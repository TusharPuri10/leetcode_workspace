/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result(rowIndex+1);
        int i = 0, j,k;
        result[i].push_back(1);
        if(rowIndex == 0)
            return result[i];
        while(i != rowIndex)
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
        return result[i];
    }
};
// @lc code=end

