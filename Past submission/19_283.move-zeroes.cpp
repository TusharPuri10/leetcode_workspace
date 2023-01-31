/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        for(i = 0; i < nums.size();i++)
        {
            if(nums[i]==0)
                break;
        }
        if(i==nums.size())
            return;
        j=i;
        while(j < nums.size())
        {
            if(nums[j]!=0)
            {
                nums[i]=nums[j];
                nums[j]=0;
                ++i;
                ++j;
            }
            else
            {
                ++j;
            }
        }
        
    }
};
// @lc code=end

