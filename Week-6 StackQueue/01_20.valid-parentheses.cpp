/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int size = s.size();
        for(int i=0;i<size;i++)
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else
                if((!stk.empty())&&((stk.top()=='(' && s[i]==')')||(stk.top()=='[' && s[i]==']')||(stk.top()=='{' && s[i]=='}')))
                    stk.pop();
                else
                    stk.push(s[i]);

        if(stk.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end

