/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0,flag=0;
        int max = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(max < nums[i])
                max = nums[i];
            if(nums[i]==0)
                flag = 1;
        }
        if(flag == 0)
            return 0;
        if((max*(max+1))/2 == sum)
            return max+1;
        else
            return ((max*(max+1))/2) - sum;
    }
};
// @lc code=end

