/*
 * @lc app=leetcode id=2148 lang=cpp
 *
 * [2148] Count Elements With Strictly Smaller and Greater Elements 
 */

// @lc code=start
class Solution {
public:
    int countElements(vector<int>& nums) {
        int size = nums.size();
        if(size<3)
            return 0;
        
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=1;i<size-1;i++)
        {
            if(nums[0]<nums[i] && nums[i]<nums[size-1])
                ++count;
        }
        return count;
    }
};
// @lc code=end

