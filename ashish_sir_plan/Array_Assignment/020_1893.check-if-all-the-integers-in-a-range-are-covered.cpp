/*
 * @lc app=leetcode id=1893 lang=cpp
 *
 * [1893] Check if All the Integers in a Range Are Covered
 */

// @lc code=start
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int size = ranges.size(),i=0;
        sort(ranges.begin(),ranges.end());
        int value;
        for(value=left;value<=right;value++)
        {
            // cout<<ranges[i][0]<<" "<<value<<" "<<ranges[i][1]<<endl;
            if(i>=size)
                return false;
            if(ranges[i][0]<=value && value<=ranges[i][1])
            {
                continue;
            }
            else
            {
                ++i;
                --value;
            }
        }
        if(value>=right)
            return true;
        else
            return false;
    }
};
// @lc code=end

