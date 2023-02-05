/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int flag=0;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                ++flag;
                if(flag>1)
                    return false;
                again:
                if(i>j)
                    return false;
                if(s[i+1]==s[j] && s[i]==s[j-1])
                {
                    if(i+1==j)
                        return true;
                    ++i;
                    --j;
                    goto again;
                }
                else if(s[i+1]==s[j])
                    ++i;
                else if(s[i]==s[j-1])
                    --j;
                else
                    return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};
// @lc code=end

