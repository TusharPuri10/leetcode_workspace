/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        while(nums[0]==nums[size-1])
        {
            if(size==1)
                break;
            --size;
        }
        int start = 0, end = size-1;
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
            end=size-1;
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
                end = size-1;
            }
        }
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
                return true;
            else if(nums[mid]<target)
                start = mid+1;
            else
                end = mid-1;
            mid = start + (end-start)/2;
        }
        return false;
        
    }
};
// @lc code=end

