/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {

//O(n) solution

        // 1 2 3 3 3 3
//count    1 0 1 2 3 4
//maj      1 - 3 3 3 5

        // {3 1 3 2} {3 3}->such pair will always exist in even number of elements 6 elements 2,4
//count    1 0 1 0 1 2
//maj      3 - 3 - 3 3

        // 7 elements 3,4
        // 1 2 3 4 4 4 4 -> if 1 2 3 4 4 then answer will be wrong but since we know majority always exist so this algo must give right answer
//count    1 0 1 0 1 2 3
//maj      1 - 3 - 4 4 4

        // 4 1 4 2 4 3 4
//count    1 0 1 0 1 0 1
//maj      4 - 4 - 4 - 4

    int count=0;
    int maj;
    int size = nums.size();
    for(int i=0;i<size;i++)
    {
        if(count==0)
            maj = nums[i];
        if(nums[i]!=maj)
            --count;
        else
            ++count;
    }
    return maj;

    }
};
// @lc code=end

