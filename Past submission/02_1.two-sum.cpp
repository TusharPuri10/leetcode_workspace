/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        // for(int i = 0; i < nums.size();i++)
        // {
        //     m[nums[i]]=i;
        // }
        vector<int> result;
        for(int i = 0;i<nums.size();i++)
        {
            auto it = m.find(target-nums[i]);
            if(it!=m.end()/* && i!=it->second*/)
            {
                result.push_back(i);
                result.push_back(it->second);
                return result;
                // m.erase(nums[i]);
                // m.erase(target-nums[i]);
            }
            m[nums[i]]=i;
        }
        return result;
    }
};
// @lc code=end

