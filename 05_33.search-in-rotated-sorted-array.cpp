/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        int pivot = start + (end-start)/2;
        while(start<end)
        {
            if(nums[0]<=nums[pivot])
                start=pivot+1;
            else
                end=pivot;
            pivot = start + (end-start)/2;
        }
        if(nums[0]<=nums[pivot])
        {
            start=0;
            end=nums.size()-1;
        }
        else
        {
            if(nums[0]<= target && target<=nums[pivot-1])
            {
                start = 0;
                end = pivot-1;
            }
            else
            {
                start = pivot;
                end = nums.size()-1;
            }
        }
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start = mid+1;
            else
                end = mid-1;
            mid = start + (end-start)/2;
        }
        return -1;

    }
};
// @lc code=end

