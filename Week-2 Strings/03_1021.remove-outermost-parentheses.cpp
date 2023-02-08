/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> stk;
        int i=0;
        while(i<s.size())
        {
            stk.push(s[i]);
            while(!stk.empty())
            {
                ++i;
                if(s[i]==')')
                {
                    stk.pop();
                    result.push_back(')');
                }
                else
                {
                    stk.push('(');
                    result.push_back('(');
                }
            }
            result.pop_back();
            ++i;
        }
        return result;

    }
};
// @lc code=end

