/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int start1 = 0, start2 = n;
        while(start2<2*n)
        {
            v.push_back(nums[start1]);
            v.push_back(nums[start2]);
            ++start1;
            ++start2;
        }
        return v;
    }
};
// @lc code=end

