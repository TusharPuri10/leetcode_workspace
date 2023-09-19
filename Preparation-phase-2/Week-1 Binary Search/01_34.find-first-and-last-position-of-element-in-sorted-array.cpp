/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, last = nums.size()-1;
        int mid = start + (last-start)/2;
        //for left position
        int left=-1;
        while(start<=last)
        {
            if(nums[mid]==target)
            {
                left = mid;
                last = mid-1;
            }
            else if(target<nums[mid])
            {
                last = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (last-start)/2;
        }

        start = 0;
        last = nums.size()-1;
        mid = start + (last-start)/2;
        //for right position
        int right=-1;
        while(start<=last)
        {
            if(nums[mid]==target)
            {
                right = mid;
                start = mid+1;
            }
            else if(target<nums[mid])
            {
                last = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (last-start)/2;
        }

        vector<int> result;
        result.push_back(left);
        result.push_back(right);
        return result;


    }
};
// @lc code=end

