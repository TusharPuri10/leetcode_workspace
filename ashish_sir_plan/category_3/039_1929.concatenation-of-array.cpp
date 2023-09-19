/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //O(n)
        int size = nums.size();
        for(int i=0;i<size;i++)
            nums.push_back(nums[i]);
        return nums;
    }
};
// @lc code=end

