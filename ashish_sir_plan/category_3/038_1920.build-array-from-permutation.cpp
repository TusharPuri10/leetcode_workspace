/*
 * @lc app=leetcode id=1920 lang=cpp
 *
 * [1920] Build Array from Permutation
 */

// @lc code=start
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> v;
        for(int i=0;i<size;i++)
            v.push_back(nums[nums[i]]);
        return v;
    }
};
// @lc code=end

