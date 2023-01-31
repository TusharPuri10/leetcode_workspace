/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> m;
        for(int i=0; i<nums.size(); i++)
        {
            if(i>k)
                m.erase(nums[i - (k+1)]);
            if(m.find(nums[i]) != m.end())
                return true;
            else
                m.insert(nums[i]);
        }
        return false;
    }
};
// @lc code=end

