/*
 * @lc app=leetcode id=594 lang=cpp
 *
 * [594] Longest Harmonious Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        //sliding window approach after sorting
        int max_len=-1,len=0;
        int min=0;
        int max=0;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        while(min<size && max<size)
        {
            if(nums[max]-nums[min]==0)
                ++max;
            else if(nums[max]-nums[min]==1)
            {
                len = max-min;
                if(max_len<len)
                    max_len=len;
                ++max;
            }
            else
                ++min;
        }
        return max_len+1;
        
    }
};
// @lc code=end

