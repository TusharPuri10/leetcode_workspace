/*
 * @lc app=leetcode id=2404 lang=cpp
 *
 * [2404] Most Frequent Even Element
 */

// @lc code=start
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
                m[nums[i]]++;
        }
        int max_times = -1, max_element=-1;
        for(auto &value: m)
        {
            if(value.second>max_times)
            {
                max_times = value.second;
                max_element = value.first;
            }
            if(value.second == max_times)
            {
                if(value.first<max_element)
                    max_element = value.first;
            }
        }
        return max_element;
    }
};
// @lc code=end

