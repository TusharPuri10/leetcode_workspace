/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                stk.push('(');
                if(max<stk.size())
                    max = stk.size();
            }
            else if(s[i]==')')
                stk.pop();
        }
        return max;
    }
};
// @lc code=end

