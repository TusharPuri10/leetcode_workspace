/*
 * @lc app=leetcode id=1984 lang=cpp
 *
 * [1984] Minimum Difference Between Highest and Lowest of K Scores
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        //sliding window of k length
        //first window
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int start=0,end=k-1;
        int min = 100000;
        while(end<size)
        {
            if(min>nums[end]-nums[start])
                min=nums[end]-nums[start];
            ++start;
            ++end;
        }
        return min;
    }
};
// @lc code=end

