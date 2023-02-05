/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                ++k;
            if(k>1)
                return false;
        }
        if(k==1 && nums[0]<nums[nums.size()-1])
            return false;
        else
            return true;
    }
};
// @lc code=end

