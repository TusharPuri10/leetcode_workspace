/*
 * @lc app=leetcode id=1984 lang=cpp
 *
 * [1984] Minimum Difference Between Highest and Lowest of K Scores
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int size = nums.size();

        // approach sliding window approach
        // first sorting
        sort(nums.begin(),nums.end());
        
        //first window
        int min_diff = nums[k-1] - nums[0];

        // rest window
        for(int i=k;i<size;i++)
            if(min_diff > nums[i] - nums[i - (k-1)])
                min_diff = nums[i] - nums[i - (k-1)];
        
        return min_diff;
    }
};
// @lc code=end

