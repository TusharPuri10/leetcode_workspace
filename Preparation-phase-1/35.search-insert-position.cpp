/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left<=right)
        {
            mid = left+((right-left)/2);
            // calculate int m = l + (r - l)/2; rather than int m = (l + r)/2; to avoid overflow.
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return left;
    }
};
// @lc code=end

