/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=1)
            return 1;
        else
            return climbStairs(n-1)+climbStairs(n-2);
    }
};
// @lc code=end

