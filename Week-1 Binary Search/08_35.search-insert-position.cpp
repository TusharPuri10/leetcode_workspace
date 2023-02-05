/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        int mid = start + (end-start)/2;
        int ans;
        while(start<=end)
        {
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
                ans=mid;
            }
            mid = start + (end-start)/2;
        }
        return mid;
    }
};
// @lc code=end

