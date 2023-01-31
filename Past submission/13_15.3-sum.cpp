/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector < vector<int> > result;
        vector<int> triplets;
        int start,last;
        for(int i = 0; i < nums.size()-2;i++)
        {
            if(nums[i]>0)
                break;
            start = i+1;
            last = nums.size()-1;
            while(start<last)
            {
                if(nums[i]+nums[start]+nums[last]==0)
                {
                    triplets.push_back(nums[i]);
                    triplets.push_back(nums[start]);
                    triplets.push_back(nums[last]);
                    result.push_back(triplets);
                    triplets.clear();
                    ++start;
                }
                else if(nums[i]+nums[start]+nums[last]>0)
                {
                    again1:
                    --last;
                    if(last>0 && nums[last]==nums[last+1])
                        goto again1;
                }
                else
                {
                    again:
                    ++start;
                    if(start<nums.size()-1 && nums[start]==nums[start-1])
                        goto again;
                }
            }
        }
        return result;
    }
};
// @lc code=end

