/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int z=0,flag=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0 && flag == 1)
            {
                z=i;
                flag=0;
            }
            else if(nums[i]==0)
            {
                continue;
            }
            else
            {
                swap(nums[i],nums[z]);
                ++z;
            }
        }

    }
};
// @lc code=end

