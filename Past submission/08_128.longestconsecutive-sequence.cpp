/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int> m;
        int count=1,max=0,j;
        for(int i=0;i<nums.size();i++)
        {
            m.insert(nums[i]);
        }
        for(auto &value : m)
        {
            int i = value - 1;
            if(m.find(i)==m.end())//not exist
            {
                j=value+1;
                again:
                if(m.find(j)!=m.end())//exist
                {
                    ++count;
                    ++j;
                    goto again;
                }
                else
                {
                    if(max<count)
                        max = count;
                    count = 1;
                }
            }
        }
        return max;

    }
};
// @lc code=end

