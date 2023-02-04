/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       // %n -> [0...n-1]
       vector<int> result(nums.size());
       for(int i=0;i<nums.size();i++)
       {
            result[(i+k)%nums.size()] = nums[i];
       }
       nums=result;
    }
};
// @lc code=end

