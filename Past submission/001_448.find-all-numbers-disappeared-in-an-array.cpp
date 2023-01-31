/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto value: nums)
        {
            m[value]++;
        }
        vector<int> result;
        for(int i=1;i<=nums.size();i++)
        {
            if(m.find(i)==m.end())
                result.push_back(i);
        }
        return result;
    }
};
// @lc code=end

