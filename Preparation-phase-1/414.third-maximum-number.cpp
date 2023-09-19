/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3)
        {
            return nums[nums.size() -1];
        }
        int max=nums[nums.size() - 1],j=0;
        for(int i = nums.size() - 2; i >= 0; i--)
        {
              if(nums[i]!=max)
              {
                ++j;
                max = nums[i];
                if(j==2)
                    return max;
              }
        }
        return nums[nums.size() -1];
    }
};
// @lc code=end
