/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement=nums[0];
        int frequency = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(majorityElement == nums[i])
                ++frequency;
            else
                --frequency;
            if(frequency == 0)
                majorityElement = nums[i+1];
        }
        return majorityElement;
    }
};
// @lc code=end

