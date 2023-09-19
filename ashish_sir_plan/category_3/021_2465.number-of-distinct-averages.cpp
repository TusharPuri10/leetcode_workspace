/*
 * @lc app=leetcode id=2465 lang=cpp
 *
 * [2465] Number of Distinct Averages
 */

// @lc code=start
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        unordered_set<float> s;
        for(int i=0;i<size/2;i++)
        {
            s.insert((nums[i]+nums[size-1-i])/2.0);
        }
        return s.size();
    }
};
// @lc code=end

