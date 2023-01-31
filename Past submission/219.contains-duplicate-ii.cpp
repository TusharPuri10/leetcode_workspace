/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>max)
                max = nums[i];
            if(nums[i]<min)
                min = nums[i];
        }
        vector<int> count;
        vector<pair<int,vector<int> > >hash_index(max-min+1,make_pair(0,count));
        for(int i=0; i<nums.size()-1; i++)
        {
            ++hash_index[nums[i]].first;
            hash_index[nums[i]].second.push_back(i);
        }
        for(int i=0; i<nums.size()-1; i++)
        {
            
        }
        return false;
    }
};
// @lc code=end

