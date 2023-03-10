/*
 * @lc app=leetcode id=2239 lang=cpp
 *
 * [2239] Find Closest Number to Zero
 */

// @lc code=start
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int min_dis = 100000;
        int min=0;
        int dis;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            dis=abs(nums[i]);
            if(dis<min_dis)
            {
                min=i;
                min_dis=dis;
            }
            if(dis==min_dis && nums[i]>nums[min])
                min=i;
        }
        return nums[min];
    }
};
// @lc code=end

