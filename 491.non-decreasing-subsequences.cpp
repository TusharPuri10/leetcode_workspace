/*
 * @lc app=leetcode id=491 lang=cpp
 *
 * [491] Non-decreasing Subsequences
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {

        vector<vector<int>> result;
        int size = nums.size();
        for(int i=0;i<size-1;i++)
        {
            set<vector<int>> s;
            for(int j=1;j<=size-1-i;j++)
            {
                // start i+1
                // each time j elements input
                int start = i+1;
                int k = j;
                vector<int> entry;
                while(start<=size-j)
                {
                    entry.push_back(nums[i]);
                    int l=0;
                    while(l<k)
                    {
                        if(entry[entry.size()-1]<=nums[start+l])
                            entry.push_back(nums[start+l]);
                        ++l;
                    }
                    if(entry.size()>1)
                        s.insert(entry);
                    ++start;
                    entry.clear();
                }
            }
            for(auto &value:s)
                result.push_back(value);
        }
        return result;
    }
};
// @lc code=end

