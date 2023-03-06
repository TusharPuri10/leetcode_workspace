/*
 * @lc app=leetcode id=2016 lang=cpp
 *
 * [2016] Maximum Difference Between Increasing Elements
 */

// @lc code=start
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int size = nums.size(), max_diff = -1, min = 0;
        for(int i=1;i<size;i++)
            if(nums[i]<=nums[min])
                min = i;
            else if(max_diff < nums[i]-nums[min])
                max_diff = nums[i] - nums[min];
        return max_diff;
        }
};
// @lc code=end

