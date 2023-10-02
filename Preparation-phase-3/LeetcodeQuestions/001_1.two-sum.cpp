/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<size;i++)
            v.push_back({nums[i],i});
        sort(v.begin(), v.end());
        int start=0,end=size-1;
        while(start<end)
        {
            if(v[start].first+v[end].first==target)
                return {v[start].second,v[end].second};
            else if(v[start].first+v[end].first > target)
                --end;
            else
                ++start;
        }
        return {-1,-1};
    }
};
// @lc code=end

