/*
 * @lc app=leetcode id=1111 lang=cpp
 *
 * [1111] Maximum Nesting Depth of Two Valid Parentheses Strings
 */

// @lc code=start
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        stack<char> s;
        vector<int> result;
        for(int i=0;i<seq.size();i++)
        {
            if(seq[i]=='(')
            {
                s.push(seq[i]);
                result.push_back(s.size()-1);                
            }
            else
            {
                result.push_back(s.size()-1);
                s.pop();
            }
        }
        return result;
    }
};
// @lc code=end

