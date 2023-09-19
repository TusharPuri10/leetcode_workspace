/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x;
        long mid = start + (end-start)/2;
        int ans;
        while(start<=end)
        {
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)//here mid can be possible solution
            {
                ans = mid;
                start=mid+1;
            }
            else
            {
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};
// @lc code=end

