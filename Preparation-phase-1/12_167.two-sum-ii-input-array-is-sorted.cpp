/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1=0,p2=numbers.size()-1;
        vector<int> result;
        while(p1<=p2)
        {
            if(numbers[p1]+numbers[p2]==target)
            {
                result.push_back(p1+1);
                result.push_back(p2+1);
                return result;
            }
            else if(numbers[p1]+numbers[p2]>target)
                --p2;
            else
                ++p1;
        }
        return result;
    }
};
// @lc code=end

