/*
 * @lc app=leetcode id=594 lang=cpp
 *
 * [594] Longest Harmonious Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0,end=0;
        int max=-1;
        int size = nums.size();
        while(end<size)
        {
            if(nums[end]-nums[start]==0)
                ++end;
            else if(nums[end]-nums[start]==1)
            {
                if(max<end-start)
                    max = end-start;
                ++end;
            }
            else
                ++start;
        }
        return max+1;
    }
};
// @lc code=end

