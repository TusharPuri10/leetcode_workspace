/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && v[i].first==v[i-1].first)
                result[v[i].second]=result[v[i-1].second];
            else
                result[v[i].second]=i;
        }
        return result;
    }
};
// @lc code=end

