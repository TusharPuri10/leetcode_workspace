/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums[i] = 51;
                ++count;
            }   
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;

    }
};
// @lc code=end

