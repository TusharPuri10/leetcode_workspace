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
        for(int i=0 ; i<strs[0].size(); i++)
        {
            char c = strs[0][i];
            for(int j=1 ; j<strs.size(); j++)
            {
                if(strs[j][i] != c)
                {
                    goto End;
                }
            }
            result.push_back(c);
        }
        End:
        return result;
    }
};
// @lc code=end

