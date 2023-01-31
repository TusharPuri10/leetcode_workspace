/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        int left = 0;
        int right = x;
        long long mid;
        int flag =0;
        while(left <= right)
        {
            mid = (right - left) / 2 +left;
            if(mid * mid == (long long) x)
                return mid;
            else if(mid*mid < x)
            {
                left = mid + 1;
                flag = 0;
            }
            else
            {
                right = mid - 1;
                flag = 1;
            }
        }
        if(flag == 0)
            return mid;
        else
            return mid - 1;
    }
};
// @lc code=end

