/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    void swap( int& x, int& y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==i+1)
                continue;
            else{
                while(nums[i]!=i+1)
                {
                    if(nums[nums[i]-1]==nums[i])
                        return nums[i];
                    swap(nums[nums[i]-1],nums[i]);
                }
            }
        }
        return 1;
    }
};
// @lc code=end

