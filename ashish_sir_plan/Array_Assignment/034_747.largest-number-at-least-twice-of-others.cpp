/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0;
        int size = nums.size();
        for(int i=0;i<size;i++)
            if(nums[i]>nums[max])
                max=i;
        
        for(int i=0;i<size;i++)
        {
            if(i==max)
                continue;
            if(2*nums[i]>nums[max])
                return -1;
        }
        return max;
        
    }
};
// @lc code=end

