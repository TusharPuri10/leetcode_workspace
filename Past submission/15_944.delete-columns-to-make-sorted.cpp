/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int columns = strs[0].size();
        int count=0;
        for(int j=0;j<columns;j++)
        {
            for(int i=0;i<strs.size()-1;i++)
            {
                if(strs[i][j]>strs[i+1][j])
                {
                    ++count;
                    break;
                }
            }
        }
        return count;

    }
};
// @lc code=end

