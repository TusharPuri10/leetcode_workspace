/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        //lowercase 97 - 122
        //uppercase 65 - 90 
        //number 0-9 48-57
        while(start<=end)
        {
            if(!((s[start]>='A' && s[start]<='Z')||(s[start]>='a' && s[start]<='z')||(s[start]>='0' && s[start]<='9')))
            {
                ++start;
                continue;
            }
            if(!((s[end]>='A' && s[end]<='Z')||(s[end]>='a' && s[end]<='z')||(s[end]>='0' && s[end]<='9')))
            {
                --end;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end]))
                return false;
            ++start;
            --end;
        }
        return true;
    }
};
// @lc code=end

