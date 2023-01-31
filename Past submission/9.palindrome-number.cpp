/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long long temp =  x, rev = 0, last_dig;
        while(temp)
        {
            last_dig = temp%10;
            rev = rev*10 + last_dig;
            temp = temp/10;
        }
        if(rev==x && x>=0)
            return true;
        else
            return false;
    }
};
// @lc code=end

