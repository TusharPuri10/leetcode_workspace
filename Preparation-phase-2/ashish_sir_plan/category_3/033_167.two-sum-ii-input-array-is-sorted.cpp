/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        while(start<end)
        {
            if(numbers[start]+numbers[end]==target)
                return {start+1,end+1};
            else if(numbers[start]+numbers[end]>target)
                --end;
            else
                ++start;
        }
        return {0,0};
    }
};
// @lc code=end

