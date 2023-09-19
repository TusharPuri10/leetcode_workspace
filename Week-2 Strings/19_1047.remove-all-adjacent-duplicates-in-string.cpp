/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        stk.push(s[0]);
        string result;
        for(int i=1;i<s.size();i++)
        {
            if(stk.empty() || s[i]!=stk.top())
                stk.push(s[i]);
            else
                stk.pop();
        }
        while(!stk.empty())
        {
            result.push_back(stk.top());
            stk.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
// @lc code=end

