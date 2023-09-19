/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        int end = s.size()-1;
        while(end>=0)
        {
            if(s[end]==goal[0])
            {
                int j = end;
                for(int i=0;i<goal.size();i++)
                {

                    if(s[j]!=goal[i])
                        goto again;
                    ++j;
                    if(j==s.size())
                        j=0;
                }
                return true;
            }
            again:
            --end;
        }
        return false;
    }
};
// @lc code=end

