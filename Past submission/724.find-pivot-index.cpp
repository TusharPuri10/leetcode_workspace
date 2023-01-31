/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int rsum = 0;
       for(int i=0;i<nums.size();i++){
        rsum += nums[i];
       }
       if(rsum - nums[0] == 0)
            return 0;
        rsum -= nums[0];
        int lsum = nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            rsum -= nums[i];
            if(lsum == rsum)
                return i;
            lsum += nums[i];
        }
        if(lsum == 0)
            return nums.size()-1;
        else
        return -1;
    }
};
// @lc code=end

