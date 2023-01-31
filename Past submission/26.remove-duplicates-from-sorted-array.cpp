/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k,count=0,i=0;
        while(i<nums.size())
        {
            k=i;
            again:
            ++k;
            if(k<nums.size() && nums[i]==nums[k])
            {
                nums[k]=101;
                ++count;
                goto again;
            }
            i = k;
        }
        sort(nums.begin(),nums.end());
        return (nums.size() > count)?(nums.size() - count):(count-nums.size());
    }
};
// @lc code=end

