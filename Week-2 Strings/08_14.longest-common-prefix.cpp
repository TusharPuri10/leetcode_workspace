/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        int i=0;
        while(i<strs[0].size())
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                    goto end;
            }
            result.push_back(strs[0][i]);
            ++i;
        }
        end:
        return result;
    }
};
// @lc code=end

