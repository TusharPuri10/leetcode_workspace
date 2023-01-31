/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int, int> m;
        // for(auto value: nums)
        // {
        //     m[value]++;
        // }
        // for(auto value: m)
        // {
        //     if(value.second > 1)
        //         return true;
        // }
        // return false;

        // Your runtime beats 17.52 % of cpp submissions
        // Your memory usage beats 24.56 % of cpp submissions

        unordered_set<int> m;
        for(auto value: nums)
        {
            if(m.find(value)!=m.end())
                return true;
            else
                m.insert(value);
        }
        return false;
        // Your runtime beats 94.01 % of cpp submissions
        // Your memory usage beats 51.67 % of cpp submissions

        int max = *max_element(nums.begin(),nums.end()) + 1;
        int* hsh = (int*) calloc(max,sizeof(int));
        for(int i=0; i<nums.size(); i++)
        {
            ++(hsh[nums[i]]);
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(hsh[nums[i]]>1)
                return true;
        }
        return false;
        // same
    }
};
// @lc code=end

