/*
 * @lc app=leetcode id=2500 lang=cpp
 *
 * [2500] Delete Greatest Value in Each Row
 */

// @lc code=start
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
            sort(grid[i].begin(),grid[i].end());
        
        int end = grid[0].size()-1;
        int ans=0,max;
        while(end>=0)
        {
            max=0;
            for(int i=0;i<grid.size();i++)
                if(max<grid[i][end])
                    max = grid[i][end];
            ans+=max;
            --end;
        }
        return ans;
    }
};
// @lc code=end

