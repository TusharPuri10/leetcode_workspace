/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int mid = start + (end-start)/2;
        int flag;
        while(start<end)
        {
            if((mid==nums.size()-1)||(mid==0)||((nums[mid]!=nums[mid+1])&&nums[mid]!=nums[mid-1]))
                return nums[mid];
            else if(nums[mid]==nums[mid+1])//left part of pair
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            if(mid%2!=flag)
            {
                end = mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid = start + (end-start)/2;
        }
        return nums[mid];
        
    }
};
// @lc code=end

