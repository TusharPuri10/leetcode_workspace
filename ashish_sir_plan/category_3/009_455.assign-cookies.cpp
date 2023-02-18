/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int inds=0,indg=0,count=0;
        while(inds<s.size() && indg<g.size())
        {
            if(g[indg]<=s[inds])
            {
                ++count;
                ++inds;
                ++indg;
            }
            else
            {
                ++inds;
            }
        }
        return count;
    }
};
// @lc code=end

