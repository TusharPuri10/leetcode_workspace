/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        //  4 3 2 {1 2 3 4 5 6} 3 2 1
        // l = 3 , r = 8 return -> 8-3 + 1 = 6


        int size = nums.size();
        if(size==1)
            return 1;

        int r = 1;
        int length=1;
        int max = 0;
        
        while(r<size)
        {
            if(nums[r-1]<nums[r])
            {
                ++length;
                ++r;
            }
            else
            {
                ++r;
                length=1;
            }
            if(length>max)
                max = length;
        }
        return max;
    }
};
// @lc code=end

