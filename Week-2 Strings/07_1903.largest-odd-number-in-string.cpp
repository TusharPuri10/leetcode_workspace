/*
 * @lc app=leetcode id=1903 lang=cpp
 *
 * [1903] Largest Odd Number in String
 */

// @lc code=start
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]%2==0)//even
            {
                num.pop_back();
            }
            else
            {
                return num;
            }
        }
        return num;
    }
};
// @lc code=end

