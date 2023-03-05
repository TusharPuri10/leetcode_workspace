/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int,int> m;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<size;i++)
        {
            if(m.find(target-nums[i]) != m.end() && m[target-nums[i]]!=m[nums[i]])
                return {m[nums[i]],m[target-nums[i]]};
        }
    }
};
// @lc code=end

