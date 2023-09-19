/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int k = 0;
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i]==1)
                ++k;
            else
            {
                if(max<k)
                    max=k;
                k=0;
            }
        }
        if(max<k)
            max = k;
        
        return max;
    }
};
// @lc code=end

